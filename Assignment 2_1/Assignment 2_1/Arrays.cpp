/*
Source file for function definitions.

~Jacob Cloward
2/24/2015
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Arrays.h"

// Function to create an array with n random numbers between 0 and x
int* createArray(int arraySize, int minRange, int maxRange)
{
	srand(time(NULL)); // Generate seed for rand()

	int* Array = new int[arraySize]; // Create a pointer to a new array

	for (size_t i = 0; i < arraySize; i++) // Loop to assign values to each index in the array
	{
		// Generate a random number for each index in the array
		Array[i] = (rand() % maxRange) + minRange;
	}

	return Array;
}

// Function to create an array from two arrays with the associated values added together
int* mergeArrays(int* firstArray, int* secondArray, int arraySize)
{
	int* resultArray = new int[arraySize]; // Create a pointer to a new array

	for (size_t i = 0; i < arraySize; i++) // Loop to assign values to each index in the array
	{
		/* The value at each index in the array is equal to the sum of the values
		at the same index in the other two arrays*/
		resultArray[i] = firstArray[i] + secondArray[i];
	}

	return resultArray;
}

// Header function
void printHeader()
{
	std::cout << "+----------------------------------+\n"; // \n makes the code cleaner
	std::cout << "| Random Addition Problem Program! |\n";
	std::cout << "+----------------------------------+\n\n";
	std::cout << "This program generates random addition problems and give their answers!\n" << std::endl; //std::andl flsuhes the output... or somethin
}