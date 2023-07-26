#include <iostream> // for cout
#include "Task4.h"

// Automatically called Function, when Goes out of scope.. Read Header File.
Task4::~Task4()
{
	// Learned Through opengl
	// Get rid of Allocated memory.
	delete[] Array_elements;
}

void Task4::GetUserInput()
{
	int size{ 0 }; // Size of the array Entered By The User. " Placeholder " element.
	cout << "\n Please Insert your Desired Size for your list  : ";
	cin >> size;

	Array_size = size; // Store Size to another string to be used later on.
	// A declaration of a pointer to a dynamic Array of the Type " Int " with the size n " size " - user defined.
	int* Array = new int[size]; // Dynamically allocated array Use ~Task4() to avoid memory leak..

	/* Ask User To input Integer Elements To the list of a " size " Defined by user.*/
	cout << "Please Enter :" << size << " Number Elements into your Array : " << endl;
	
	// Insert Elements into our Array.
	for (int i = 0; i < size; i++)
		cin >> Array[i];

	Array_elements = Array;
}

int* Task4::GetArray()
{
	return Array_elements; 
}

int Task4::GetSize()
{
	return Array_size;
}

int Task4::RecursiveLinearSearch(int* Array, const int key, int size)
{
	size = size - 1; // -1 To get a right Position in Array.
	
	// Terminate if unexpected size of less or equal to 0 is encountered.
	if (size <= 0)
		return -1;

	// When Array Size is equal to the Users Key Element return size
	if (Array[size] == key)
		return size;

	RecursiveLinearSearch(Array, key, size);
}