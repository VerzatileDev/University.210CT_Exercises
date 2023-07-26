#pragma once // allows the C preprocessor to include a header file when it is needed and to ignore an #include directive otherwise

class Task1
{
public:
	// Run classes In Task1.cpp File.
	void FindFactorial();
	void FindTrailings();
private:
	// Set Declartations.
	int input;
	unsigned long long int f = 1; // Factorial Default is 0
	int trailings = 0; // 0s at the end of a factorial number.. Defaulted to 0;
};