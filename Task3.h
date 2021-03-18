#pragma once
#include <iostream> // Used for cout
#include <string>
#include <vector>
using namespace std;

class Task3
{
public:
	// Take Input From User " Keyboard" in a Line,
	// Split the Line To Words, and Store them In an Array
	vector<string> TakeUserString();

	//
	void Print_Words_In_Reverse_Order(const vector <string> &Words);
};

