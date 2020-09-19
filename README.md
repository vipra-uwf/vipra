# VIPRA

### Installation and Execution Instructions

[Vagrant Setup Guide](vagrant_setup_guide.md)

##### Makefile Commands
- Clean, Compile, and Run: `$ make ccr`
- Compile and Run: `$ make cr` 
- Clean and Compile: `$ make cc`
- Clean: `$ make clean`




---
### Extension Instructions




---
### Virtual Classes

#### PedestrianSet
- Entity set object used for storing the properties of all pedestrians
- in the simulation. 

#### ObstacleSet (will be virtual soon)

#### EntitySetFactory
convert data types

#### Goals

#### PedestrianDynamicsModel

#### InputDataLoader

#### OutputDataWriter  

#### SimulationOutputHandler





---
### Types

#### ENTITY_SET
Stores all entity set data that is read in from a file and 
is returned from all derived classes of InputDataLoader. 
The vector contains a unordered map of attributes for each element, 
*e.g.* pedestrian or obstacle file data.
```
std::vector<std::unordered_map<std::string, std::string>>
```
#### SIM_PARAMS 
Stores all simulation parameters.
```
std::unordered_map<std::string, FLOATING_NUMBER>
```
#### SIM_CONFIG
Stores the user-defined simulation configuration preferences.
```
std::unordered_map<std::string, std::string>
``` 
#### FLOATING_NUMBER
Allows quickly changing precision for the entire
simulation by altering the typedef.
```
float
```
#### Dimensions
Stores coordinate data for each dimension 
```
struct Dimensions
{
    std::vector<FLOATING_NUMBER> coordinates;
};
```
Example usage:
- retrieve pointer from a pedestrian entity set
- dereference pointer to enable bracket accessing notation
- specify which passenger and then specify which dimension
```
int main()
{
	std::vector<Dimensions>* pedestrianCoordinates = set->getPedestrianCoordinates();		
	
	std::cout << (*pedestrianCoordinates)[0].coordinates[0] << std::endl;
	std::cout << (*pedestrianCoordinates)[0].coordinates[1] << std::endl;

	// prints the 0th passenger's x coordinate then their y coordinate

	return 0;
}
```




---
### Utility Scripts

#### Trajectory Visualization

Using the header-only C++ plotting library, 
[matplotlib-cpp](https://github.com/lava/matplotlib-cpp),
this script reads from a user-specified trajectory file, 
stores trajectory coordinates in vectors then iterates over
them to display a 2D visualization (example video below)

<a href="http://www.youtube.com/watch?feature=player_embedded&v=twemPX9KuGk
" target="_blank"><img src="http://img.youtube.com/vi/twemPX9KuGk/0.jpg" 
alt="Trajectory Visualization" width="580" height="360" border="15" /></a>

###### Requirements:
- Linux
- Python 3.8.x
###### Limitations: 
- only supports 2D visualization 
- visualization preferences are currently "hard-coded" 
