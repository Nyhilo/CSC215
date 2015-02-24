/*
This program takes input from the user
then builds a christmas tree with the number of lines the user entered
It also randomly places ornaments on the tree

~Jacob Cloward
2/20/015
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	// Variables
	int lines;
	const int ornamentSpread = 2;
	bool placedOrnamentBefore = false;

	srand(time(NULL));

	// TODO Header

	//Take input from the user
	cout << "Pleas enter the number of lines you want your tree to be: ";
	cin >> lines;
	cout << endl << endl;

	// Loop for each line of the tree
	for (int i = 0; i < lines; i++)
	{
		// Loop for adding trailing space before drawing the tree
		for (int j = 0; j < (lines-i); j++)
		{
			cout << " ";
		}

		// Loop for drawing the tree
		for (int k = 0; k < (i*2)-1; k++)
		{
			// Place a star on top of the tree
			if (i == 1)
			{
				cout << "X";
			}
			// Check if we want to try and place an ornament here
			else if (rand() % (ornamentSpread + 1) == 0)
			{
				// This makes sure we don't ever place two ornaments right next to each other
				if (!placedOrnamentBefore)
				{
					cout << "O";
					placedOrnamentBefore = true;
				}
				// If we did have one placed right before this one, draw a normal part of the tree instead
				else
				{
					cout << "*";
					placedOrnamentBefore = false;
				}
			}
			// Draw a normal part of the tree
			else
			{
				cout << "*";
			}
		}
		// Go to the next line
		cout << endl;
	}

	system("pause");
	return 0;
}