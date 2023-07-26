#include <iostream>
#include "Task6.h"

/* Binary Search
* Basic of Binary search.
   Array of { 1,2,3,4,5,6,7,8,9}  and we are looking for 2  We Start Middle Which is 5
   This Of Course Means that We Expect the Array to already be in Order " Sorted ". And We are looking For a given Item.
   From  N Amount of Elements.

   // My understaind of what Is asked is as follows : 

   get value we are looking for search
   get input to get specific value from intervals {i, j} // From between where we look for the value

   Run program to see if values was found in intervals
   return value if it was found in the specific interval, else return not found.
*/

void Task6::binarySearch()
{

	// Get First Low and First High  [0] and [10 - 1] = [9] Position 9
	int Lowest = 0;
	int Highest = size - 1;
	int interval = 0;

	/*  After Entering Search */
	while (Lowest <= Highest) {
		int middle = (Lowest + Highest) / 2; // Find Middle

		// If Middle of the Array in the Period is equal to search Exit Loop.
		if (binaryArray[middle] == search)
		{
			return; // Element Found Can Proceed to End Loop.
		}
		// If element In Middle greater than search find new High
		if (binaryArray[middle] > search)
		{
			Highest = middle - 1;
		}
		// If element in middle is less than search Find new Low.
		else
			Lowest = middle + 1;
	}
}

void Task6::tellArray()
{
	// Print Array For User
	std::cout << "The Starting Array Elements are : ";
	for (int i = 0; i < size; i++) {
		std::cout << binaryArray[i] << " ";
	}
}