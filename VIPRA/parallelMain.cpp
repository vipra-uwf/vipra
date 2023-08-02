// NOLINTBEGIN
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
#include <spdlog/spdlog.h>

#include "configuration/configuration_reader.hpp"
#include "distributions/distributions.hpp"
#include "json/value.h"
#include "main.hpp"
#include "randomization/random.hpp"

void master(int, char **);
void slave();

VIPRA::CONFIG::Map makeRandomConfig(const VIPRA::CONFIG::Map &,
                                    const VIPRA::CONFIG::Map &);

int                id = 0;       // process rank
int                np;           // number of MPI processes
int                NUM = 15000;  // number of tasks to be processed  (given
uint64_t           seed = 13465;
VIPRA::pRNG_Engine engine{seed};
int                main(int argc, char **argv);

VIPRA::CONFIG::Map minConfig;
VIPRA::CONFIG::Map maxConfig;

//****************************************************************************80

int main(int argc, char *argv[])

//****************************************************************************80
{
  double wtime;

  // MPI_Init(&argc, &argv);

  // MPI_Comm_size(MPI_COMM_WORLD, &np);

  // MPI_Comm_rank(MPI_COMM_WORLD, &id);

  // NUM= atoi(argv[1]);

  wtime = MPI_Wtime();

  if (id == 0) {
    master(argc, argv);
  } else {
    slave();
  }

  wtime = MPI_Wtime() - wtime;
  spdlog::info("Process {} time = {}", id, wtime);

  // MPI_Finalize();
  spdlog::info("Normal end of execution.");

  return 0;
}

void master(int argc, char **argv) {
  getInputFiles(argc, argv);
  minConfig = ConfigurationReader::getConfiguration(minConfigFile);
  maxConfig = ConfigurationReader::getConfiguration(maxConfigFile);

  makeRandomConfig(minConfig, maxConfig);

  // int rank;
  // int        work;
  // float      result[7];
  // MPI_Status status;

  /*
   * Seed the slaves.
   */
  // int         nextp = 0;
  // std::string line;
  // int         p = 0;
  // for (rank = 1; rank < np; ++rank) {
  // TODO: create config map, randomize values, send to slave

  // getline(aFile, line);
  // std::vector<std::string> params;
  // MPI_Request              req = nullptr;
  // split(line, ' ', params);
  // float parameters[7]; /*master will send the ID of next simulation along with
  //                         six parameters in an array*/
  // parameters[0] = p;
  // // std::cout<<params.size()<<std::endl;
  // for (int i = 1; i < 7; ++i) {
  //   // std::cout<<"i is "<<i<<std::endl;
  //   parameters[i] = atof(params[i - 1].c_str());
  // }
  // // work = nextp;      ; /* get_next_work_request */
  // MPI_Send(parameters,         /* message buffer */
  //          7,                  /* one data item */
  //          MPI_FLOAT,          /* data item is an integer */
  //          rank,               /* destination process rank */
  //          1, MPI_COMM_WORLD); /* user chosen message tag */
  // p++;
  // }

  /*
   * Receive a result from any slave and dispatch a new work
   * request work requests have been exhausted.
   */
  // while ( nextp < NUM)/* valid new work request */
  // while (p < NUM) {
  // TODO: recieve results, create new configs, send to workers

  // std::getline(aFile, line);
  // std::vector<std::string> params;
  // split(line, ' ', params);
  // float parameters[7];
  // parameters[0] = p;
  // for (int i = 1; i < 7; ++i) {
  //   parameters[i] = atof(params[i - 1].c_str());
  // }
  // MPI_Recv(&result,                  /* message buffer */
  //          1,                        /* one data item */
  //          MPI_INT,                  /* of type double real */
  //          MPI_ANY_SOURCE,           /* receive from any sender */
  //          MPI_ANY_TAG,              /* any type of message */
  //          MPI_COMM_WORLD, &status); /* received message info */
  // MPI_Request req;
  // MPI_Send(parameters, 7, MPI_FLOAT, status.MPI_SOURCE, 1, MPI_COMM_WORLD);
  // p++;
  // }

  /*
   * Receive results for outstanding work requests.
   */
  // for (rank = 1; rank < np; ++rank) {
  // TODO get results from all workers

  // MPI_Recv(&result, 7, MPI_FLOAT, MPI_ANY_SOURCE, MPI_ANY_TAG, MPI_COMM_WORLD, &status);
  // float fakeParameters[7];

  // for (float &fakeParameter : fakeParameters) {
  //   fakeParameter = -1;
  // }
  // MPI_Send(fakeParameters, 7, MPI_FLOAT, status.MPI_SOURCE, 2, MPI_COMM_WORLD);
  // }
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
  // int        result;
  // float      work[7];
  // MPI_Status status;
  // char       buffer[200];
  // for (;;) {
  // TODO recieve simconfig and module params from master, run simulation, return

  // MPI_Recv(&work, 7, MPI_FLOAT, 0, MPI_ANY_TAG, MPI_COMM_WORLD, &status);
  // /*    test.
  //  * Check the tag of the received message.
  //  */
  // MPI_Request req;
  // if (status.MPI_TAG == 2) {
  //   return;
  // }
  // // sspdlog::info(buffer,"%d %d\n", work, np);
  // // system(buffer);
  // parallel_main(simconfig, moduleParams);
  // result = 1; /* do the work */
  // // result is redundant - serves no real purpose than to indicate job is done

  // MPI_Send(&result, 1, MPI::INT, 0, 0, MPI_COMM_WORLD);
  // }
}

VIPRA::CONFIG::Map makeRandomConfig(const VIPRA::CONFIG::Map &minModuleParams,
                                    const VIPRA::CONFIG::Map &maxModuleParams) {
  const auto &minDoc = minModuleParams.getDoc();
  const auto &maxDoc = maxModuleParams.getDoc();

  VIPRA::CONFIG::Map ret;

  for (const auto &module : minDoc.getMemberNames()) {
    for (const auto &val : minDoc[module].getMemberNames()) {
      const auto &valRef = minDoc[module][val];
      if (valRef.isNumeric()) {
        float                              min = minDoc[module][val].asFloat();
        float                              max = maxDoc[module][val].asFloat();
        VIPRA::uniform_distribution<float> distr{min, max};
        ret[module][val] = distr(engine);
      } else {
        ret[module][val] = valRef;
      }
    }
  }

  return ret;
}

// NOLINTEND