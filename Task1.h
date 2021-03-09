#pragma once
#include <iostream> // Used for cout
#include <string>
using namespace std;

class Task1
{
public:
	// Set Declartations.
	int input;
	unsigned long long int f = 1; // Factorial Default is 0
	int trailings = 0; // 0s at the end of a factorial number.. Defaulted to 0;

	// Run classes In Task1.cpp File.
	void FindFactorial();
	void FindTrailings();
};