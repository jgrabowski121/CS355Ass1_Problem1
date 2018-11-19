//
// Justin Grabowski
// CS355
// Fall 2018
// November 9th 2018
// Instructor Ganchev G.
// main.cpp
// CS355Ass1_Problem1
// Language C++
//
// Purpose: This file tests the time used for the creation
// of arrays in C+

#include <iostream>
#include "timeTest.h"
#include <exception>
#include <iomanip>
#include <chrono>

//Function declarations

/*
* Declares two static two-dimetional arrays
*  of size (100 X 100)
*/
void function1();

/*
* Create two two-dimetional arrays
*  of size (100 X 100) on the stack
*/
void function2();

/*
* Create two two-dimetional arrays
*  of size (100 X 100) on the heap and
*  deallocates them before exiting
*/
void function3();

/*
* Creates two two-dimentional arrays of
*  size (100 X 100) on the heap and does not
*  deallocate them
*/
void function4();

int main(void) {
    //Create executionTimeTester object
   executionTimeTester timeTest;
   unsigned ITERATION = 100000;
   
   timeTest.setStartClock();
   for(size_t i = 0; i <= ITERATION; i++)
   {
      function1();
   }
   timeTest.setEndClock();
   
   std::cout << "Time to execute function1 "
				<< ITERATION
				<< " iterations: "
				<< std::fixed
				<< std::setprecision(9)
				<< (timeTest.getTimeDiferenceSeconds()*1000)
				<< " ms\n";
   
   std::cout << "Time to execute function1 1 iteration: "
               << std::scientific
               << (timeTest.getTimeDiferenceSeconds()/ITERATION) * 1000
               << " ms\n\n";
   
   //---------------
   
   timeTest.setStartClock();
   for(size_t i = 0; i <= ITERATION; i++)
   {
      function2();
   }
   timeTest.setEndClock();
   
   std::cout << "Time to execute function2 "
               <<  ITERATION
               << " iterations: "
               << std::fixed
               << (timeTest.getTimeDiferenceSeconds()*1000)<< " ms\n";
   
   std::cout << "Time to execute function2 1 iteration: "
               << std::scientific
               << (timeTest.getTimeDiferenceSeconds()/ITERATION) * 1000
               << " ms\n\n";
   
   //----------------
   
   timeTest.setStartClock();
   for(size_t i = 0; i <= ITERATION; i++)
   {
      function3();
   }
   timeTest.setEndClock();
   
   std::cout << "Time to execute function3 "
               <<  ITERATION
               << " iterations: "
               << std::fixed
               << (timeTest.getTimeDiferenceSeconds()*1000)
               << " ms\n";
   
   std::cout << "Time to execute function3 1 iteration: "
               << std::scientific
               << (timeTest.getTimeDiferenceSeconds()/ITERATION) * 1000
               << " ms\n\n";
   
   //-----------------
   /* Uncomment this block to text heap overflow
   unsigned long long iterations = 0;
   try
   {
      while(iterations++ <= 100000)
      {
         function4();
         if((iterations % 1000) == 0)
         {
         std::cout << "Iterations: " << iterations << std::endl;
         }
      }
   }
   catch (std::bad_alloc&)
   {
      std::cout << "Crashed after :" << iterations << std::endl;
   }
   */
}


void function1()
{
   static int arrayOne[100][100];
   static int arrayTwo[100][100];
}

void function2()
{
   int arrayOne[100][100];
   int arrayTwo[100][100];

}

void function3()
{
   char arraySize = 100;
   int** arrayOne = new int*[arraySize];
   int** arrayTwo = new int*[arraySize];
   
   delete [] arrayOne;
   delete [] arrayTwo;
}

void function4()
{
   short arraySize = 100;
   
   int** arrayOne = new int*[arraySize];
   for(size_t i = 0; i < arraySize; i++)
   {
      arrayOne[i] =  new int [arraySize];
   }
   
   int** arrayTwo = new int*[arraySize];
   for(size_t i = 0; i < arraySize; i++)
   {
      arrayTwo[i] =  new int [arraySize];
   }
}
