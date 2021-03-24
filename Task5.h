#pragma once

class Task5
{
public:
	void tellArray(); // Print curreny Array elements
	void runBubbleSort();
	void runinsertionSort();
	void runSelectionSort();
private:
	// Array and Contents
	int A[10] = { 2,7,9,4,1,5,3,6,0,8 };
	// Size of Array " Could have found size, but we already know the starting size.
	int n = 10;
};