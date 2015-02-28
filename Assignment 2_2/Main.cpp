/*
This program is a simple, text-based calculator.
It can add, subtract, multiply, and divide.

Number input function courtesy of Shiven, http://stackoverflow.com/a/10829026/3245249

~Jacob Cloward
2/27/15
*/

#include <iostream>
#include "Calculator.h"
#include "Calculator.cpp"
#include <cstdlib>

int main()
{
    double number1;
    double number2;
    char oper;

    printHeader();

    lineBreak(1);

    // Main while loop
    bool running = true;
    while(running)
    {
        // First, ask for the first number we are calculating
        number1 = getValueFromUser("Please enter an input: ");

        lineBreak(1);

        // Ask for an arithmetic operator
        oper = getOperFromUser("Now enter an arithmetic operator [+, -, *, /]: ");

        lineBreak(1);

        // Ask for a second number
        number2 = getValueFromUser("Finally, enter a second number: ");

        lineBreak(1);

        // Switch Statement to choose what operation to perform
        double answer;
        switch(oper)
        {
            default: std::cout << "How did you get here??" << std::endl;
            case '+': answer = add(number1, number2); break; // Do Addition
            case '-': answer = subtract(number1, number2); break; // Do Subtraction
            case '*': answer = multiply(number1, number2); break; // Do Multiplication
            case '/': answer = divide(number1, number2); break; // Do Division
        }

        // Print the wole problem
        std::cout << "The full equation is: ";
        std::cout << number1 << " " << oper << " " << number2 << " = " << answer << std::endl;

        lineBreak(2);

        // Check if the user would like to do another calculation
        running = askForReplay("Would you like to do another calculation? [y/n] ");

        lineBreak(2);
    }

    // Wait for user input
    system("pause");
    return 0;
}
