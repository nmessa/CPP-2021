// AP Computer Science Marine Biology Case Study program
// Copyright (C) 2000  College Board and Educational Testing Service

// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// aquamain.cpp - copyright statement added 5/31/2000

#include <iostream>
using namespace std;
#include "aquafish.h"

int main()
{
  int tankSize;
  int stepsPerSim;
  int step;

  cout << "Tank size? ";
  cin >> tankSize;
  cout << "Steps per simulation? ";
  cin >> stepsPerSim;

  AquaFish fish(tankSize);

  for (step = 0; step < stepsPerSim; step++)
  {
    fish.Swim();
  }
  
  cout << "Bump count = " << fish.BumpCount() << endl;

  return 0;
}


