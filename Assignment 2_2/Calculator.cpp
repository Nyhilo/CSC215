/*
File containing function definitions fo the main program.

~Jacob Cloward
2/27/15
*/

// Includes
#include <iostream>
#include <limits>
#include "Calculator.h"

// Function Definitions

// Function to try input again
void tryInputAgain()
{
    // Ignore all characters up to the newline
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    // Print the error message
    std::cout << "Invalid input.  Try again: ";
}

// Get a number value from the user. All inputs are converted to doubles.
double getValueFromUser(std::string message)
{
    //Print message
    std::cout << message;

    // Take input and make sure it is a number. Breaks if something like 23.a is entered (would return 23)
    double x = 0;
    // Check if our input is a number
    while(!(std::cin >> x))
    {
        // Clear the error flag on cin
        std::cin.clear();
        tryInputAgain();
    }

    // Return the number
    return x;
}

// Gets a character input from the user. Inputs longer than 1 char will be truncated
char getOperFromUser(std::string message)
{
    //Print message
    std::cout << message;

    // Get input
    char c;
    std::cin >> c;

    // Check if the input is a valid operation
    while(!(c == '+' || c == '-' || c == '*' || c == '/'))
    {
        tryInputAgain();
        // Wait for new input
        std::cin >> c;
    }

    // Return the character
    return c;
}

// Ask the user if they would like to enter another calculation
bool askForReplay(std::string message)
{
    //Print message
    std::cout << message;

    // Get input
    char replay;
    std::cin >> replay;

    // Check if the input is valid
    while(!(replay == 'y' || replay == 'Y'|| replay == 'n' || replay == 'N'))
    {
        tryInputAgain();
        // Wait for new input
        std::cin >> replay;
    }

    // Return true if the user wants to keep going or false otheriwse
    if(replay == 'y' || replay == 'Y')
    {
        return true;
    }
    else // This will always be either 'n' or 'N'
    {
        return false;
    }
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
    std::cout << "+-----------------------+\n";
    std::cout << "| Text-Based Calculator |\n";
    std::cout << "+-----------------------+\n" << std::endl;
}

// Adds blank lines to the output
void lineBreak(int lines)
{
    for (int i = 0; i < lines; ++i)
    {
        std::cout << std::endl;
    }
}
