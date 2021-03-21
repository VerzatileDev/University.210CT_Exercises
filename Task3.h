#pragma once // allows the C preprocessor to include a header file when it is needed and to ignore an #include directive otherwise
#include <vector> // Also Used In Task3.Cpp source File.
#include <string>
using namespace std; // Not a good Practise If other Namespaces are Used.

class Task3
{
public:
	// Take Input From User " Keyboard" in a Line,
	// Split the Line To Words, and Store them In an Array
	vector <string> TakeUserString();

	//
	void PrintWordsInReversedOrder(const vector <string> &Words);
};

