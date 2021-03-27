#include "Task5.h"
#include <iostream>

// Tell The User the Array elements;
void Task5::tellArray()
{
	// In Task5.h Private These used for reminder.
	//int myArray[10] = {2,7,9,4,1,5,3,6,0,8}
	//int ArraySize = 10;

	// first loop i = 0  and its less than n "10" then print A[i] and add 1 and loop again.
	for (int i = 0; i < Arraysize; i++) {
		std::cout << myArray[i] << " ";
	}
	//std::cout << "\n";
}

/* 
 Bubble Sort Compares Value to Right if Value on right is less than current " Swap "
 1. Set Loop Counter " Comparison and Count First Loops Passes
 2. First For Loop
    Compare Values if less than the Size of Array Continue
 3. Initialize Loop Pass  " Count ++ "
 4. Second For Loop  " Nested" 
	Set I and Check that the Value is less than Arraysize -1 and Current compareValue;
5.  Element Swap  " Comparison " 
	end Loop.
6. Tell User Current Array Elements and Loop Pass count. 
   Reset Comparison " Element Swap " Counter
7. End of Loop Pass, Starts Over.
*/

void Task5::runBubbleSort()
{
	// Loop Counters
	int comparison = 0; // Amount of Times Elements Were Compared. 
	int count = 0;

	for (int compareValue = 0; compareValue < Arraysize - 1; compareValue++)
	{
		count++; // Counts passes
		// As long as i is less than n - comparison - 1 then do this and add 1 to i
		for (int i = 0; i < Arraysize - compareValue - 1; i++)
		{
			/* Swap Elements */
			// Comparison and swap if A[i] is 7 and is higher than A[i+1] "next element" and that is 6
			// elementholder = now A[i]
			// set A[i] to be element of A[ i +1 ]
			// and A[ i+1 ] to be elementholder.
			if (myArray[i] > myArray[i + 1])
			{
				elementholder = myArray[i];
				myArray[i] = myArray[i + 1];
				myArray[i + 1] = elementholder;
				comparison++; // Add 1 Each time If Statement is Run.
			}
		}
		//Tell the User Passes through current loop.
		std::cout << "Initializing loop Pass: " << count << " current Array Contents are : ";
		tellArray(); // Print Elements Currently
		std::cout << "in Total there were :"<< comparison << " element location comparsions " << std::endl;
		comparison = 0; // Reset 
	}

	//std::cout << A[2] << std::endl; // Debug for element no 3. as Array start with 0;

	std::cout << "\nBubble sorts has Ended and the Following Sorted elements are as follows :" << std::endl;
	tellArray(); // Print out current array elements.
	std::cout << std::endl;
	// Complexity of 0(n) Where Few of the Elements are In the Correct Place so 9- 0 
}

/*
* Insertion SOrt Check previous Element In the List If that is less than Previous Swap.
1. Reset Array Elements and Size
2. Tell The User Current Array Elements
3. Set Counters For Each Loop pass and Comparison.

4. First Loop 
   For Each Time CompareValue is less than ArraySize Run
   Set Pass Counter, Store Element In The Position of CompareValue To
   Element Holder.  DUblicate " Reposition Position Value to i

5. Run Second For Loop  " Check Element On the LEft "
   Check Element On the Left  " Run And Statement
   if The New Total is Higher than 0 And Element is Higher than compareValue Start Loop.
   Change Element On position Total to now be Total + 1
   End Loop
6. Print Array Values  " End of Loop Pass " 
*/

void Task5::runinsertionSort()
{	
	/* This is not Ideal, but essentially the Value should be reset*/
	/* After that myArray value should be set to original.        */

	// Print the Array Contents before Insertion Sort
	int myArray2[10] = { 2,7,9,4,1,5,3,6,0,8 };
	int Arraysize = 10;

	for (int i = 0; i < Arraysize; i++) {
		std::cout << myArray2[i] << " ";
	}

	/* Tell User that Sorting Has Started */
	std::cout << "\n";
	std::cout << "\nStarting insertion Sort ..\n" << std::endl;

	// Loop Counters. 
	int count = 0;
	int comparison = 0;

	// Insertion Sort 
	for (int compareValue = 1; compareValue < Arraysize; compareValue++) // ArraySize 10.
	{
		count++;
		int Total; // Total of Current i - 1 
		int elementholder = myArray2[compareValue]; // Store checked element.
		int i = compareValue; //Reposition Position Value to i

		/* Element Check to the left */
		for (Total = i -1; Total >= 0 && myArray2[Total] > elementholder; Total--)
		{
			myArray2[Total + 1] = myArray2[Total];
			comparison++;
		}
		//current element |elementholder| to Array. 
		myArray2[Total + 1] = elementholder;

		/* Print Array Values Each Pass */
		std::cout <<"Initializing loop Pass: " << count << " current Array Contents are : ";
		for (int compareValue = 0; compareValue < Arraysize; compareValue++) {
			std::cout << myArray2[compareValue] << " ";
		}
		
		// Tell how many element swaps the Given Array did
		std::cout << "in Total there were : " << comparison << " element location comparsions " << std::endl;
		comparison = 0;// Set swap to 0 before next run.
	}
}

/*
 Plan For Going through Selection Sort :
 1. First ReDefine Array Element And size-
 2. Print out The Array Element By looping through each Element
 and while Loop it Prints the Element and ads a space " For Readability"
 3. Tell User That the Selection Sort Has Started
 4. Set Up Counters For finding out each Iteration " Run of A loop.
 " How Many Times The First For Loop was Run ".

 5.  In Selection Sort We Want to Run as Long as the Array Amount " Size of myArray3 = 10 "
     Add One Each Loop, to get to the next Position.
 6.  Intialize a Counter For Loop Passes Add 1 Each New Pass.
 7.  Print Element at The Start of the Loop " So each time I goes through it
     Prints out Elements that Are Currently Stored in the Array.
 
 8. Loop for  Comparison Swap
	Set Total  " i + 1 " Next Element If less than "Continue 
	Compare Element of Total and i  " Add 1 to Comparison
	Find smallest Element with If.
 9. End Loop
 10. Swap Elements Around If the new MinValue is not the Same as i
 11. End Of First For Loop Start Pass two.
*/

void Task5::runSelectionSort()
{
	// Print the Array Contents before Selection Sort
	int myArray3[10] = { 2,7,9,4,1,5,3,6,0,8 };
	int Arraysize = 10;
	std::cout << "\nStarting Array Elements are :";
	// Print out The current Array elements.
	for (int i = 0; i < Arraysize; i++) {
		std::cout << myArray3[i] << " ";
	}
	std::cout << "\n"; // Print a line inbetween.
	std::cout << "\nStarting Selection Sort..\n" << std::endl;
	
	// Loop Counters
	int count = 0;
	int comparison = 0;

	// Set Values for Loops
	int i;
	int MinValue;
	int total;

	for (i = 0; i < Arraysize ; i++)
	{

		/* Print Out  Element In Array In the Current Time Of the Loop */
		std::cout << "Initializing loop Pass : "<< count << " And its Elements Are : ";
		for (int i = 0; i < Arraysize; i++) {
			std::cout << myArray3[i] << " ";
		}
		
		comparison = 0;
		count++; // Every Interation add 1

		// We Assume that i is the Smallest Element Seen .
		MinValue = i;

		// Find SMallest Element.
		for (total = i + 1; total < Arraysize; total++)
		{
			//std::cout << total;
			comparison++;
			// Compare Values If Total i + 1 is less than MinValue so i currently
			// If True Set Total To the New Min Values " End if statement.
			if (myArray3[total] < myArray3[MinValue])
			{
				MinValue = total;
			}
			
		}
		// Swap Positions if Not same As Value i. First Pass 9!= 0
		if (MinValue != i)
		{
			// Store element on position to temp " meaning We can Redefine Value
			// Store Element From position i to be the new MinValue
			// Store  temp Value To a new Position i.
			int temp = myArray3[MinValue];
			myArray3[MinValue] = myArray3[i];
			myArray3[i] = temp;
		}
		std::cout << "in Total there were : " << comparison << " element  comparsions " << std::endl;
	}
	// Time Complexity is the Same For All cases
}
/*
void Task5::Reset()
{
	int myArray3[10] = { 2,7,9,4,1,5,3,6,0,8 };

}
*/