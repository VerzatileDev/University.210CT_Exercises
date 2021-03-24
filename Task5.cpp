#include "Task5.h"
#include <iostream>

// Tell The User the Array elements;
void Task5::tellArray()
{
	// In Task5.h Private These used for reminder.
//int A[10] = { 2,7,9,4,1,5,3,6,0,8 }; 
//int n = 10;
	// This function Prints out Array Elements after completing nested loops.
	// first loop i = 0  and its less than n "10" then print A[i] and add 1 and loop again.
	for (int i = 0; i < n; i++) {
		std::cout << A[i] << " ";
	}
	// New line Before the next Calls.
	std::cout << "\n" << std ::endl;
}

void Task5::runBubbleSort()
{
	int elementholder; // Placeholder to hold the element being swapped.
	int count = 0; // Tell loop ones 
	// c = compare  , n size of array - 1 to get the right position.
	for (int c = 0; c < n - 1; c++)
	{
		count++;
		// Nested Loop " a loop inside a loop"
		// As long as i is less than n - comparison - 1 then do this and add 1 to i
		for (int i = 0; i < n - c - 1; i++)
		{
			// Comparison and swap if A[i] is 7 and is higher than A[i+1] "next element" and that is 6
			// elementholder = now A[i]
			// set A[i] to be element of A[ i +1 ]
			// and A[ i+1 ] to be elementholder.
			if (A[i] > A[i + 1])
			{
				elementholder = A[i];
				A[i] = A[i + 1];
				A[i + 1] = elementholder;
			}
		}
		//Tell the User Passes through first loop.
		std::cout << "Initializing loop Pass: " << count << " and its Contents are : " << std::endl;
		tellArray(); // Print out current array elements.
	}

	//std::cout << A[2] << std::endl; // Debug for element no 3. as Array start with 0;

	std::cout << "\nBubble sorts has Ended and the Following Sorted elements are as follows :" << std::endl;
	tellArray(); // Print out current array elements.
}

void Task5::runinsertionSort()
{

}

void Task5::runSelectionSort()
{

}