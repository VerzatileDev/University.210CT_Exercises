#include "Task3.h"


void Task3::TakeUserString()
{
	cout << "Please Insert your word or a sentance "; // Take input from Keyboard
	getline(cin, myString);  // Gets A Line of Text To a string. Instead of just one word.
	//cout <<  myString << endl; // Test For myString Contents.
	
	// Filters out words from Line String and Splits the To multiple lines.
	for (auto x : myString)
	{
		if (x == ' ')
		{
			cout << word << endl;
			word = "";
		}
		else
		{
			word = word + x;
		}
	}
	cout << word << endl;
}