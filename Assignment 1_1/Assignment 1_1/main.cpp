/*
This program asks the user for their heigth and weight, then return their BMI

~Jacob Cloward
2/19/2015
*/

#include <iostream>

using namespace std;

// Funtions

// GUI functions

void printHeader(){
	cout << "+---------------------------------+\n";
	cout << "|    Body Mass Index Calculator   |\n";
	cout << "+---------------------------------+" << endl;
}

// Main Function

int main(){
	// Global variables
	float feet;	// Note to self: find out why I can't store these as ints
	float inches;
	float height; // total height in inches
	float weight; // total weight in pounds
	float BMI; // Calculated Body Mass Index
	
	printHeader();

	// Ask the user for their height in inches and feet
	cout << "To start, please enter your height.\n\n";
	cout << "Feet: ";
	cin >> feet;
	cout << endl; // Next Line

	cout << "Inches: ";
	cin >> inches;
	cout << endl; // Next Line

	// Calculate the height in inches
	height = (feet * 12) + inches;

	// Ask the user for their weight in pounds
	cout << "Next, please enter yout weight (in lbs).\n\n";
	cout << "Weight: ";
	cin >> weight;
	cout << endl; // Next Line
	cout << endl; // Next Line

	// Display the user's Body Mass Index
	BMI = weight / (height * height) * 703; // American BMI formula

	cout << "Your Body Mass Index Number is: " << BMI << endl;

	system("pause");
	return 0;
}