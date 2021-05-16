#include "simulate.h"
#include <vector>
#include "environ.h"
using namespace std;

// constructor

Simulation::Simulation()
// postcondition: simulation is ready to run    
{

}

// public modifying functions

void Simulation::Step(Environment & env)
// postcondition: one step of simulation in env has been made    
{
  vector<Fish> fishList;
  int k;

  fishList = env.AllFish();
  for (k = 0; k < fishList.size(); k++)
  {
    fishList[k].Move(env);   
  }
}

void Simulation::Run(Environment & env, int steps)
// postcondition: simulation on env run for # steps passed as steps    
{
  int k;

  for (k = 0; k < steps; k++)
  {
    Step(env);
  }
}

