#include <iostream>
#include "Task6.h"

/* Binary Search
   Array of { 1,2,3,4,5,6,7,8,9}  and we are looking for 2  We Start Middle Which is 5
   This Of Course Means that We Expect the Array to already be in Order " Sorted ". And We are looking For a given Item.
   From  N Amount of Elements.

   // My understaind of what Is asked is as follows : 

   Ask For element We will be Looking = 3 ; 
   Iteration 1;  { 1,2,3,4,(5),6,7,8,9}  Find Middle
   Iteration 2;  { 1,(2),3,4}  Find Middle and Before  ArraySize -1;
   Iteration 3;  ArraySize -1;  { 1,(2),3 }  If [2] = search; Finish
   Element Found at Interal 3; ? 

   Ask Element to be searched and Check if it was Found on Their Thought Interval. or 
   find If   Element is Found between ( 1 ) and ( 6) for example. 

   Notes 
    Find middle of Array  0 + 10 / 2    = 5 
	int Middle = (Low + High) / 2;

	Find Middle  " Pass 0  "   Low = 0, High = 10  / 2
	if myArray[ middle ] > Search  then find new High = Middle -1;
	if myArray[ middle ]  == search then  Return Exit Loop " Element Found ".
	Else  when myArray[ middle ] < search then find new Low 
 
*/

void Task6::binarySearch()
{


	// Print Array For User
	std::cout << "The Starting Array Elements are : ";
	for (int i = 0; i < size; i++) {
		std::cout << binaryArray[i] << " ";
	}
	std::cout << "\n Starting Binary Search To find In which Interval the Value was FOund.. " << std::endl;

	// Ask User For Item Search.
	std::cout << "Please Insert the Value want to search For" << std::endl;
	int search;
	std::cin >> search;

	// Get First Low and First High  [0] and [10 - 1] = [9] Position 9
	int Lowest = 0;
	int Highest = size - 1;
	int interval = 0;

	/*  After Entering Search */
	while (Lowest <= Highest) {
		interval++; // Count How many Intervals It took to Find element.
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
	std::cout << " The searched Element" << search << "was Found in Interval :" << interval;
}