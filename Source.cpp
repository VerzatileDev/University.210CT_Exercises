#include <iostream>
using namespace std;

int input;
// Unsigned long long  0  -  20 Digits
// unsigned long   0  - 10 digits
unsigned long long int f = 1; // Set the Initial Factorial to 1

int main()
{
	// Take User Input, Give Error If number negative, if not proceed.
	cout << "Please Enter A positive Integer  to Find its Factorial ;" << endl; // Initial User Input reguest..
	cin >> input; // Assign User Input

	if (input > 0)
	{
		for (int i = 1; i <= input; ++i)
		{
			f *= i;
		}
	}
	else
	{
		// Catch Negative Numbers and 0
		cout << "The Following Number Is A Negative";
	}

	cout << "Factorial of " << input << " is " << f << endl;


	return 0;
}
