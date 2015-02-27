/*
This program is a simple, text-based calculator.
It can add, subtract, multiply, and divide.

~Jacob Cloward
2/26/15
*/

#include <iostream>
#include "Calculator.h"
#include "Calculator.cpp"
#include <cstdlib>

int main()
{
    // Main while loop
    bool running = true;
    int count = 5;
    while(running)
    {
        printHeader();
        count--;
        if(count == 0)
        {
            running = false;
        }
    }

    // Wait for user input
    system("pause");
    return 0;
}