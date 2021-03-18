#include "Task1.h"

/* 
First Class, ask the User For number Input
If Input is less than 0 Calculates Factorial Number
Else Prints Error Message

After Factorial Number has Been Found Take " f ", which is the value of factorial number
And Finds How many 0s are at the back factorial number and prints it out.

*/

// Set Declartations.
int input;
unsigned long long int f = 1; // Factorial Default is 0
int trailings = 0; // 0s at the end of a factorial number.. Defaulted to 0;


void Task1::FindFactorial()
{
	cout << "Please Insert a Positive Integer to find out its Factorial Number and the Amount of Trailing 0s at the end of the Number : " << endl;
	cin >> input;

	if (input > 0)
	{
		// For example 5! = 5*4*3*2*1  , Which Equals 120 (Factorial Number)
		// Calculates Factorial From Input Number
		for (int i = 1; i <= input; ++i) // Int i set to 1, as i is less or equal to input, add 1.
		{
			f = f * i;
		}
		cout << "Factorial of the number " << input << " is " << f << endl;
	}
	else
	{
		//False Inputs..
		cout << "Input can Only be an Integer and a positive number, Better Luck Next time !" << endl;
	}
}

void Task1::FindTrailings()
{
	// Count Trailings ( 0s ) of "f "  At the End of the Number..
	for (int i = 5; input / i >= 1; i *= 5)
	{
		trailings = trailings + input / i;
	}
	cout << "Amount of trailings in  " << f << " is " << trailings << "\n"<< endl;

	// Time Efficiency for Finding factorial and Finding trailings Defining with BigO Notation.
	cout << "The Time bigO efficiency of the algorithm can be define as O(n), Meaning Linear Time " << endl;
	cout << " As the Time of Both for Loops is in relation to the size of the Input.  \n " << endl;
}

