//
//  problem1.hpp
//  CS355Ass1
//
//  Created by Justin Grabowski on 11/15/18.
//  Copyright © 2018 Justin Grabowski. All rights reserved.
//

#ifndef problem1_hpp
#define problem1_hpp
#include <stdio.h>
#include <iostream>
#include "timeTest.h"



class Problem1 {
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
    
   void function4();
    */
   
public:

   /*
   * This function calls function1(), function2(),
   *  and function3() to test the times for array allocation
   *
   */
   void runTest();
};

#endif /* problem1_hpp */
