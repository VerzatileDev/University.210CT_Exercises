#include "Task3.h"


vector<string> Task3::TakeUserString()
{
	string keyBoardIn;  // Input String. " Where User Words Are stored. From Getline.
	int numWords = 0; // Starting Number of Words.

	/*Take User Input*/
	// Gets A Line of Text To a string.
	cout << "Please Insert your word or a sentance ";
	getline(cin, keyBoardIn);
	//cout <<  myString << endl; // Test For myString Contents.


	//Takes Words from myString,adds them one by one Until Space In encountered,
	string wordStr;

	// String Vector Output.
	vector<string>Words;

	
	// Filters out words from Line String and Splits them To multiple lines.
	for (auto x : keyBoardIn)
	{
		if (x == ' ')
		{
			// Each Time Space Is Encountered Store "word" In an Array.
			Words.emplace_back(wordStr);
			//cout << word << endl; // Debug.

			// After Storing Set "word " to Empty.
			wordStr = "";
		}
		else
		{
			// Set Letter To "word" Each Loop Until WhiteSpace Is Encountered.
			wordStr = wordStr + x;
		}
	}
	//cout << word << endl; //Debug.
	Words.emplace_back(wordStr);
	return Words;
}

void Task3::Print_Words_In_Reverse_Order(const vector<string>& Words)
{
	// If there are No more Words Left, Exit Recursion.
	if (Words.size() == 0)
		return;

	// Print The Last "word" in the list.
	cout << Words.back() << ' ';

	// Call Cout " Print " Function  Recurseively..
	Print_Words_In_Reverse_Order(vector<string>(Words.begin(), (Words.end() - 1)));
}