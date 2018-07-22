/**
 * \file swap.cxx
 *
 * This file is part of the course wi4771tu:
 * Object Oriented Scientific Programming in C++
 *
 */

// Support for precompiled header files (only under MS Visual Studio)
#ifdef _MSC_VER
#include "stdafx.h"
#endif

// Include header file for standard input/output stream library
#include<iostream>
#include<cstdio>
    void swap_val (int a, int b) {
            int temp;
            temp = a;
            a = b;
            b = temp;
        }
    void swap_ref (int &a, int &b) {
            int temp;
            temp = a;
            a = b;
            b = temp;
        }
        void swap_add (int* a, int* b) {
            int temp;
            temp = *a;
            *a = *b;
            *b = temp;
        }

// The global main function that is the designated start of the program
int main(){

    // Read two integer values
    int i1; std::cin >> i1;
    int i2; std::cin >> i2;

    // Start here...
    swap_val(i1,i2);
    std::cout << "\n No Change for swap by value\n" ;
    std::cout << i1 <<  std::endl;
    std::cout << i2 <<  std::endl;
    swap_ref(i1,i2);
    std::cout << "\n Values swapped for swap by reference\n";
    std::cout << i1 <<  std::endl;
    std::cout << i2 <<  std::endl;
    swap_add(&i1,&i2);
    std::cout << "\n Values swapped for swap be address (back to the original)\n";
    std::cout << i1 <<  std::endl;
    std::cout << i2 <<  std::endl;
    // Return code 0 to the operating system (=no error)
    return 0;
}
