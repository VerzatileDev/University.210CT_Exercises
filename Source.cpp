#include <iostream>
using namespace std;

/* References */
/*
1. <https://www.tutorialspoint.com/cplusplus/cpp_data_types.htm> Differences between Unsigned long int and unsigned long long int




*/

// Veriables and such..

int input;
// Unsigned long long  0  -  20 Digits
// unsigned long   0  - 10 digits
unsigned long long int f = 1; // Set Factorial to 1, because Default is and 0 * 1 = 0 :D
int trailings = 0; // 0s at the end of a factorial number..

int main()
{
	// Take User Input, Give Error If number negative, if not proceed.
	cout << "Please Enter A positive Integer  to Find its Factorial ;" << endl; // Initial User Input reguest..
	cin >> input; // Assign User Input

	if (input > 0)
	{
		// For example 5! = 5*4*3*2*1  , Which Equals 120 (Factorial Number)
		// Calculates Factorial From Input Number
		for (int i = 1; i <= input; ++i) // Int i set to 1, as i is less or equal to input add 1.
		{
			f = f * i;
		}
		cout << "Factorial of " << input << " is " << f << endl;
	}
	else
	{
		// Catach False Inputs..
		cout << "Input can Only be an Integer and a positive number, Better Luck Next time !"<< endl;
	}


	// Count Trailings ( 0s ) of "f "  At the End of the Number..
	for (int i = 5; input / i >= 1; i *= 5)
	{
		trailings = trailings + input / i;
	}
	cout << "Amount of trailings in  " << f << " is " << trailings << endl;

	


	return 0;
}
