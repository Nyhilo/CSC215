/*
This program creates two arrays with 4 random numbers between 1 and 100 each.
It then creates a third array by adding the associated values of the other two arrays.

~Jacob Cloward
2/24/2015
*/

#include <iostream>
#include "Arrays.h"

/* Not doing "using namespace std;"
	I realize why it's beneficial for a beginner programming class,
	but I also understand why it's bad practice.*/

// Global variables
const int ARRAY_SIZE = 4;
const int MIN_RANGE = 0;
const int MAX_RANGE = 100;


// Main function
int main()
{
	// Create two arrays populated with random numbers
	int* Array1 = createArray(ARRAY_SIZE, MIN_RANGE, MAX_RANGE); // One of these days I'll understand why ponters are so cool
	int* Array2 = createArray(ARRAY_SIZE, MIN_RANGE, MAX_RANGE); // Right now I find them a tad irritating

	// Create the third array
	int* Array3 = mergeArrays(Array1, Array2, ARRAY_SIZE);

	// Display Header
	printHeader();

	// Print all arrays with the format "array1[1] + array2[1] = array3[1]"
	for (size_t i = 0; i < ARRAY_SIZE; i++)
	{
		std::cout << Array1[i] << " + " << Array2[i] << " = " << Array3[i] << std::endl << std::endl;
	}


	// Wait for input...
	system("pause");

	return 0;
}

