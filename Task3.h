#pragma once
#include <iostream> // Used for cout
#include <string>
#include <list> // Used for Lists.
using namespace std;

class Task3
{
public:
	// placeholder Takes Words from myString,
	//adds them one by one Until Space In encountered
	string word = ""; 
	string myString;

	// Take Words And Reverse them without Using Algorithm Librabries.
	string myStringReversed;
	void TakeUserString();
};

