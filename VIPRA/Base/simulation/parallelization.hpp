/*
**************************************************************************
In principle, this file is same as movement.cpp, however, it is based on dynamic
load balancing with a next available core getting the next task. Core 0 (Rank 0)
acts as the master co-ordinating the work distribution

USAGE: takes two arguments (the number of parameter combinations)
mpirun -n 100 ./movement_lb1 1331 file
****(file - tasks id) - one column of tasks id ( to generate this file, order
the tasks based on the time) This file is NOT  the output of BalanceLoad !!!
**************************************************************************/

#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include <mpi.h>

void master(char *);
void slave();
void calm(float sm, float idt, float isc, float asc, float tasc, float rt, int ID);

int  id;           // process rank
int  np;           // number of MPI processes
int  NUM = 15000;  // number of tasks to be processed  (given
char filename[32] = "sequences.txt";
int  main(int argc, char **argv);
void timestamp();

void split(const string &s, char delim, vector<string> &elems) {
  stringstream ss;
  ss.str(s);
  string item;
  while (getline(ss, item, delim)) {
    elems.push_back(item);
  }
}

//****************************************************************************80

int main(int argc, char *argv[])

//****************************************************************************80
{
  double wtime;

  MPI_Init(&argc, &argv);

  MPI_Comm_size(MPI_COMM_WORLD, &np);

  MPI_Comm_rank(MPI_COMM_WORLD, &id);

  // NUM= atoi(argv[1]);

  timestamp();
  wtime = MPI_Wtime();

  if (id == 0) {
    master(filename);
  } else {
    slave();
  }

  wtime = MPI_Wtime() - wtime;
  printf("  Process %d time = %g\n", id, wtime);

  MPI_Finalize();
  cout << "\n";
  cout << "  Normal end of execution.\n";

  timestamp();
  return 0;
}

void master(char *filename) {
  int        rank, work;
  float      result[7];
  MPI_Status status;

  ifstream aFile(filename);

  /*
   * Seed the slaves.
   */
  int    nextp = 0;
  string line;
  int    p = 0;
  for (rank = 1; rank < np; ++rank) {
    getline(aFile, line);
    vector<string> params;
    MPI_Request    req;
    split(line, ' ', params);
    float parameters[7]; /*master will send the ID of next simulation along with
                            six parameters in an array*/
    parameters[0] = p;
    // cout<<params.size()<<endl;
    for (int i = 1; i < 7; ++i) {
      // cout<<"i is "<<i<<endl;
      parameters[i] = atof(params[i - 1].c_str());
    }
    // work = nextp;      ; /* get_next_work_request */
    MPI_Send(parameters,         /* message buffer */
             7,                  /* one data item */
             MPI_FLOAT,          /* data item is an integer */
             rank,               /* destination process rank */
             1, MPI_COMM_WORLD); /* user chosen message tag */
    p++;
  }

  /*
   * Receive a result from any slave and dispatch a new work
   * request work requests have been exhausted.
   */
  // while ( nextp < NUM)/* valid new work request */
  while (p < NUM) {
    std::getline(aFile, line);
    vector<string> params;
    split(line, ' ', params);
    float parameters[7]; /*master will send the ID of next simulation along wi\
                           th six parameters in an array*/
    parameters[0] = p;
    for (int i = 1; i < 7; ++i) {
      parameters[i] = atof(params[i - 1].c_str());
    }
    MPI_Recv(&result,                  /* message buffer */
             1,                        /* one data item */
             MPI_INT,                  /* of type double real */
             MPI_ANY_SOURCE,           /* receive from any sender */
             MPI_ANY_TAG,              /* any type of message */
             MPI_COMM_WORLD, &status); /* received message info */
    MPI_Request req;
    MPI_Send(parameters, 7, MPI_FLOAT, status.MPI_SOURCE, 1, MPI_COMM_WORLD);
    p++;
  }
  /*
   * Receive results for outstanding work requests.
   */
  for (rank = 1; rank < np; ++rank) {
    MPI_Recv(&result, 7, MPI_FLOAT, MPI_ANY_SOURCE, MPI_ANY_TAG, MPI_COMM_WORLD, &status);
    float fake_parameters[7];

    for (int i = 0; i < 7; ++i) {
      fake_parameters[i] = -1;
    }
    MPI_Send(fake_parameters, 7, MPI_FLOAT, status.MPI_SOURCE, 2, MPI_COMM_WORLD);
  }
  /*
   * Tell all the slaves to exit.  .. This is inefficient - the above recv
   * statement is like a barrier -- need not wait for all recvs
   */
  /*
          for (rank = 1; rank < np; ++rank) {
                   MPI::COMM_WORLD.Send(0, 0, MPI::INT, rank, DIETAG);
          }
  */
}

void slave() {
  int        result;
  float      work[7];
  MPI_Status status;
  char       buffer[200];
  for (;;) {
    MPI_Recv(&work, 7, MPI_FLOAT, 0, MPI_ANY_TAG, MPI_COMM_WORLD, &status);
    /*
     * Check the tag of the received message.
     */
    MPI_Request req;
    if (status.MPI_TAG == 2) {
      return;
    }
    // sprintf(buffer,"%d %d\n", work, np);
    // system(buffer);
    calm(work[1], work[2], work[3], work[4], work[5], work[6], work[0]);
    result = 1; /* do the work */
    // result is redundant - serves no real purpose than to indicate job is done

    MPI_Send(&result, 1, MPI::INT, 0, 0, MPI_COMM_WORLD);
  }
}

//*****************************************************************************

void calm(float sm, float idt, float isc, float asc, float tasc, float rt, int ID) {
  float min_SM = 1.15f;
  float min_IDT = 0.2f;
  float min_ISC = 0.2f;
  float min_ASC = 0.2f;
  float min_TASC = 0.1f;
  float min_RT = 0.5f;

  float max_SM = 1.3f;
  float max_IDT = 1.5f;
  float max_ISC = 0.9f;
  float max_ASC = 0.9f;
  float max_TASC = 0.7f;
  float max_RT = 2.0f;

  float this_SM = (max_SM - min_SM) * sm + min_SM;
  float this_IDT = (max_IDT - min_IDT) * idt + min_IDT;
  float this_ISC = (max_ISC - min_ISC) * isc + min_ISC;
  float this_ASC = (max_ASC - min_ASC) * asc + min_ASC;
  float this_TASC = (max_TASC - min_TASC) * tasc + min_TASC;
  float this_RT = (max_RT - min_RT) * rt + min_RT;

  ofstream output;
  char     ofile[128];
  sprintf(ofile, "output%d", ID);
  output.open(ofile);

  output << "Running simulation with SimID= " << ID << ", IDT= " << this_IDT
         << ", ISC= " << this_ISC << ", ASC= " << this_ASC << ", TASC= " << this_TASC
         << ", RT= " << this_RT << ", SM= " << this_SM << endl;
  Simulation sim =
      Simulation(this_SM, 0.2f, this_IDT, this_ISC, this_ASC, this_TASC, this_RT, ID);

  int status = sim.Run(output, ID);
  if (status != 0) cout << "Err in: " << ID << endl;
}

//****************************************************************************80

void timestamp()

//****************************************************************************80
//
//  Purpose:
//
//    TIMESTAMP prints the current YMDHMS date as a time stamp.
//
{
#define TIME_SIZE 40

  static char           time_buffer[TIME_SIZE];
  const struct std::tm *tm_ptr;
  size_t                len;
  std::time_t           now;

  now = std::time(NULL);
  tm_ptr = std::localtime(&now);

  len = std::strftime(time_buffer, TIME_SIZE, "%d %B %Y %I:%M:%S %p", tm_ptr);

  std::cout << time_buffer << "\n";

  return;
#undef TIME_SIZE
}
