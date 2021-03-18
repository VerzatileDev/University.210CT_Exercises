#include "Task3.h"


void Task3::TakeUserString()
{
	// placeholder Takes Words from myString,adds them one by one Until Space In encountered
	string word = "";
	string myString;
	int numWords = 0; // Number of Words In the line that is written by User Set to 0;
	
	/*Take User Input*/
	cout << "Please Insert your word or a sentance ";
	getline(cin, myString);  // Gets A Line of Text To a string.
	//cout <<  myString << endl; // Test For myString Contents.
	
	// Filters out words from Line String and Splits them To multiple lines.
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