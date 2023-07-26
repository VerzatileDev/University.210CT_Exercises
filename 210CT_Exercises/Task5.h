#pragma once

class Task5
{
public:
	void tellArray(); // Print curreny Array elements
	void runBubbleSort(); // Compares to the Right
	void runinsertionSort();// Compares to the left
	void runSelectionSort();
	// void Reset(); // Would Reset Values of Array and Size After Sort
	// Used before each New Sort.
private:
	// Array and Contents
	int Arraysize = 10;
	int myArray[10] = { 2,7,9,4,1,5,3,6,0,8 };
	int elementholder; // Placeholder to hold the element being swapped.
	int comparison = 0; // Comparisons Between Elements.
};