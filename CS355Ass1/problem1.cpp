//
//  problem1.cpp
//  CS355Ass1
//
//  Created by Justin Grabowski on 11/15/18.
//  Copyright © 2018 Justin Grabowski. All rights reserved.
//

#include "problem1.hpp"
#include "timeTest.h"



void Problem1::function1()
{
   static int arrayOne[100][100];
   static int arrayTwo[100][100];
}

void Problem1::function2(){
   int arrayOne[100][100];
   int arrayTwo[100][100];
   
}

void Problem1::function3(){
   char arraySize = 100;
   int** arrayOne = new int*[arraySize];
   int** arrayTwo = new int*[arraySize];
   
   delete [] arrayOne;
   delete [] arrayTwo;
   
}



void Problem1::runTest()
{
//Create executionTimeTester object
executionTimeTester timeTest;

timeTest.setStartClock();
for(size_t i = 0; i <= 100000; i++)
{
   function1();
}
timeTest.setEndClock();

std::cout << "Time was " << timeTest.getTimeDiferenceSeconds() << std::endl;

//---------------

timeTest.setStartClock();
for(size_t i = 0; i <= 100000; i++)
{
   function2();
}
timeTest.setEndClock();

std::cout << "Time was " << timeTest.getTimeDiferenceSeconds() << std::endl;

//----------------

timeTest.setStartClock();
for(size_t i = 0; i <= 100000; i++)
{
   function3();
}
timeTest.setEndClock();

std::cout << "Time was " << timeTest.getTimeDiferenceSeconds() << std::endl;

//-----------------
}
