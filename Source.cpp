#include <iostream> // Used for cout
#include "Task1.h" // Find Factorial and Trailing 0s
#include "Task2.h" // Matricies
#include "Task3.h" // Recursive program that read N words In reverse Order.
#include "Task4.h" // Linear Search
#include "Task5.h" // Bubble Sort, Insertion SOrt, Selection Sort.
#include "Task6.h" //



/* References Used for Every Bit of Code */
/* References are For problems Encountered and Understanding Part of code that were not previously understood.
* 
1. <https://www.tutorialspoint.com/cplusplus/cpp_data_types.htm> Differences between Unsigned long int and unsigned long long int
2. <https://stackoverflow.com/questions/6649852/getline-not-working-properly-what-could-be-the-reasonshttps://stackoverflow.com/questions/6649852/getline-not-working-properly-what-could-be-the-reasons>
   getline getting avoided by previous "cin"
3. <https://www.tutorialspoint.com/cplusplus/cpp_references.htm> C++ Reference veriables &string.
4. <https://stackoverflow.com/questions/5776529/int-array-new-intn-what-is-this-function-actually-doing>
	dynamic pointer to an array.
*/

// Using std::  as a practise to stop using Namespace std; Eventhough for
//the current example it is not nessecary.

int main()
{
	/* Each of the Exercises are Run through This Main Function from 1 to 9 */

	/* Task 1*/
	/*Take Class in Task1.h set new t1 then Find out Factorial and Trailings in the inserted number.*/
	/* Task 1 Take Input, Find Its Factorial Number and Trailing 0s.*/
	std::cout << "Task 1 \n" << std::endl;
	Task1 t1;
	t1.FindFactorial();
	t1.FindTrailings();

	cin.ignore(); // Ignores Previous cin from the User
				  // Use this Before getline (cin, string);

	/* Task 2*/
	//Task2 t2;

	//t2.addition();



	/* Task 3 */
	std::cout << "Task 3 \n" <<std:: endl;
	std::cout << "This Task Takes your Word(s) and Writes them In Reversed Order\n" << std::endl;

	vector<string> Words; //Get the list
	Task3 t3;
	Words = t3.TakeUserString();
	t3.PrintWordsInReversedOrder(Words);

	/* Task 4 */

	Task4 t4;
	std::cout << " \n \nTask4 does a recursive linear Search for an Array Of Integers \n";
	t4.GetUserInput();
	// Ask The user for an element and See if it Exists in a list and find its position 
	// In the list.
	std::cout << "Please Insert a number to see it position in the list : " ;
	int key = 0;
	std::cin >> key; // User Entered element That we Will Look For.

	int result = t4.RecursiveLinearSearch(t4.GetArray(), key, t4.GetSize());

	// Print Error Statement : Element not found :
	if (result == -1)
		std::cout << "The Entered Number is not found in an Array / list \n\n";
	else // If found Print the Number key and its position. 
		std::cout << "The Number " << key << " Was found at the positon of " << ++result << "\n" <<std::endl;

	/* Task 5 */
	Task5 t5;

	std::cout << "\nTask 5 : \n " << std::endl;
	
	/* Bubble Sort */
	std::cout << "The Starting Array Elements are : " << std::endl;
	// Tell user the Elements inside the Given Array
	t5.tellArray();
	std::cout << "\nStarting BubbleSort..\n " << std:: endl;
	t5.runBubbleSort();  //can call methods not function.
	std::cout << "\nWorse Case Senario Would be an array with Elements of myArray[10] = {9,8,7,6,5,4,3,2,1,0 } \n" << std ::endl;

	/* Insertion Sort*/
	std::cout << "The Starting Array Elements are : " << std::endl;
	// Tell Elements inside The Array, Currently inside runinsertionsort() method.
	t5.runinsertionSort();
	std::cout << "\nWorse Case Senario Would be an array with Elements of myArray[10] = {9,8,7,6,5,4,3,2,1,0 } \n" << std::endl;
	
	/* Selection Sort */
	t5.runSelectionSort();
	std::cout << "\nWorse Case Senario Would be an array with Elements of myArray[10] = {9,8,7,6,5,4,3,2,1,0 } \n" << std::endl;

	std::cout << "The best Performing for the current Method for sorting the Array is Insertion Sort. \nas It has the least Amount of comparsions Nessecary\n" <<std::endl;


	/* Task 6 */
	Task6 t6;
	t6.binarySearch();
	

	return 0; // Main Functon always has to return 0;
}
