#include "Task3.h"
#include <iostream> // Used for cout // Transported here For better reading code.


/*
	Asks the User For A list of Words or a Word with getline,
	Split getline String to Words And Store them Into Vector List.
	Then Print Words in a reversed Order.
*/

vector<string> Task3::TakeUserString()
{
	string keyBoardIn;  // Input String. " Where User Words Are stored. From Getline.
	int numWords = 0; // Starting Number of Words.

	/*Take User Input*/
	// Gets A Line of Text To a string.
	cout << "Please Insert your Word or Words : " << endl;
	getline(cin, keyBoardIn);
	//cout <<  myString << endl; // Test For myString Contents.

	//Words Split From "keyBoardIn" are Stored Temporary to this.
	string wordStr;

	// String Vector Output.
	vector<string>Words;
	
	// Takes "keyBoardIn", Filters out a Word A temporary adds it to "wordStr
	// And then Stores it to our Array Called "Words" , Reapeats Until Empty.
	for (auto x : keyBoardIn)
	{
		if (x == ' ')
		{
			// Each Time Space Is Encountered Store "word" In an Array.
			Words.emplace_back(wordStr);
			//cout << wordStr << endl; // Debug.

			// After Storing Set "word " to Empty.
			wordStr = "";
		}
		else
		{
			// Set Letter To "wordStr" Each Loop Until WhiteSpace Is Encountered.
			wordStr = wordStr + x;
		}
	}
	//cout << wordStr << endl; //Debug.
	Words.emplace_back(wordStr);
	return Words;
}

void Task3::PrintWordsInReversedOrder(const vector<string>& Words)
{
	// If there are No more Words Left, Exit Recursion.
	if (Words.size() == 0)
		return;

	// Print The Last Element aka word in the list.
	cout << Words.back() << ' ';

	// Call Cout " Print " Function  Recurseively..
	// Previously used Print_Words_ .. Do not use, Breaks Program.
	PrintWordsInReversedOrder(vector<string>(Words.begin(), (Words.end() - 1)));
}