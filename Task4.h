#pragma once // allows the C preprocessor to include a header file when it is needed and to ignore an #include directive otherwise
#include <array> // list Used For both Header and Source File " Task4.cpp "
using namespace std;

class Task4
{
public:
	~Task4(); // A Destructor, If an object is delete or Goes out of Scope
			  // Out of Boundries. " Gets Called Automatically."

	// Ask THe user For a Desired Array Size,  And Askes Elements to be stored in an Array.
	void GetUserInput();
	int* GetArray(); // Pointer For holding addresses.
	int GetSize();
	int RecursiveLinearSearch(int* Array, const int key, const int size);

private: // As they are only used within the Source file Task4.cpp
	int* Array_elements;
	int Array_size = 0;
};