#pragma once // allows the C preprocessor to include a header file when it is needed and to ignore an #include directive otherwise
using namespace std;

class Task4
{
public:
	~Task4(); // A Destructor, If an object is delete or Goes out of Scope
			  // Out of Boundries. " Gets Called Automatically."

	// Ask THe user For a Desired Array Size,  And Askes Elements to be stored in an Array.
	void GetUserInput();
	int* GetArray();
	int GetSize();
	int RecursiveLinearSearch(int* Array, const int key, const int size);

private:
	int* Array_elements;
	int Array_size = 0;
};