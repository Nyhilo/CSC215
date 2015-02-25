/*
Header file for constant variables and function prototypes.

~Jacob Cloward
2/24/2015
*/

// Fucntion Prototypes
void generateSeed(); // Generates the seed for the pseudo random number generation
int* createArray(int arraySize, int minRange, int maxRange); // Creates an array populated with random numbers
int* mergeArrays(int* firstArray, int* secondArray, int arraySize); // Creates an array by adding the associated eements of two arrays
void printHeader(); // Prints the program's header
