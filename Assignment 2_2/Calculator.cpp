/*
File containing function definitions fo the main program.

~Jacob Cloward
2/26/15
*/

// Includes
#include <iostream>
#include "Calculator.h"

// Function Definitions

double getValueFromUser()
{
    double x;
    std::cin >> x;
    return x;
}

// Add function
double add (double num1, double num2)
{
    return num1 + num2;
}

// Subtract function
double subtract (double num1, double num2)
{
    return num1 - num2;
}

// Multiply function
double multiply (double num1, double num2)
{
    return num1 * num2;
}

// Divide function
double divide (double num1, double num2)
{
    return num1 / num2;
}

// Program Header function
void printHeader()
{
    std::cout << "+-----------------------+\n"
    std::cout << "| Text-Based Calculator |\n"
    std::cout << "+-----------------------+\n" << std::endl;
}