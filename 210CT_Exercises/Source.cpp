#include <iostream> // Used for cout
#include "Task1.h" // Find Factorial and Trailing 0s
#include "Task2.h" // Matricies
#include "Task3.h" // Recursive program that read N words In reverse Order.
#include "Task4.h" // Linear Search
#include "Task5.h" // Bubble Sort, Insertion SOrt, Selection Sort.
#include "Task6.h" // Binary Search
#include "Task7.h" // Tree Sort
#include "Task8.h" // Graphs



/* References Used for Every Bit of Code */
/* References are For problems Encountered and Understanding Part of code that were not previously understood.
* 
1. <https://www.tutorialspoint.com/cplusplus/cpp_data_types.htm> Differences between Unsigned long int and unsigned long long int
2. <https://stackoverflow.com/questions/6649852/getline-not-working-properly-what-could-be-the-reasonshttps://stackoverflow.com/questions/6649852/getline-not-working-properly-what-could-be-the-reasons>
   getline getting avoided by previous "cin"
3. <https://www.tutorialspoint.com/cplusplus/cpp_references.htm> C++ Reference veriables &string.
4. <https://stackoverflow.com/questions/5776529/int-array-new-intn-what-is-this-function-actually-doing>
	dynamic pointer to an array.
5. <https://www.youtube.com/watch?v=mUQZ1qmKlLY> Objects, Pointers destructors, Constructor, etc. Basic to Advanced programming.
6. <https://www.baeldung.com/cs/sorting-binary-tree> Tree Sort Understanding With PseudoCode.
7. <https://www.youtube.com/watch?v=BHB0B1jFKQc> Basic Understanding Of Tree Sort PreOrder,InOrder, PostOrder.
8. <https://www.youtube.com/watch?v=9Jry5-82I68> Binary Search Tree Fundementals. Academic Course.
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
	
	/*// Forumal A = B*C-2*(B+C)
	 // First Get elements, and Calculate quadratix matricies.
	
		//Variables
		values n,i,j
		rows, columns <- 3 // Get the size of rows and columns of the matricies.

		matrixB [3][3], matrixC[3][3]

		print ( "Enter Elements to your matrixB 3 b 3 matricies" )

		for i<- 1 to < rows
			for j<- 1 to < columns
				print ( " Enter Element" )
					matrixb<- [i], [j]
		end loops

		print ( "Enter Elements to your matrixC 3 b 3 matricies" )

		for i<- 1 to < rows
			for j<- 1 to < columns
				print ( " Enter Element" )
					matrixb<- [i], [j]
		end loops
		
		print ( "Enter the N of the order C, B  to calculate quadratic version")
		get n

		function QUATRATICFORM(parameter1, parameter2) // Get C with order of n
		function QUATRATICFORM(parameter1, parameter2) // Get B with order of n

		function COMPUTEFORMULA()

	*/


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
	std::cout << "\nWorse Case Senario Would be an array with Elements of myArray[10] = {9,8,7,6,5,4,3,2,1,0 } with complexity of O(n''2) \n" << std ::endl;

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
	std::cout << "\nTask 6 : \n " << std::endl;
	int size = 10;
	int binaryArray[10] = { 1,2,3,4,5,6,7,8,9,10 };
	t6.tellArray();

	// Ask User For Item Search.
	std::cout << "Please Insert the Value want to search For" << std::endl;
	int search;
	std::cin >> search;
	
	std::cout << "\n Starting Binary Search To find if values was found in specific interval " << std::endl;
	
	t6.binarySearch();
	

	/* Task 7 */
	Task7 t7;
	std::cout << "\nTask 7 : \n " << std::endl;
	std::cout << "\nTree Sort :" << "The starting Elements are : " << std::endl;
	// Initialize Array with Elements. Of the Size of 20
	int TreeSortElements[10] = { 2, 3, 88,99,15,16,20,30,40,4};
	
	for (int i = 0; i < 10; i++) {
		std::cout << TreeSortElements[i] << " ";
	}

	Task7 newTree; // Set new Tree.

	std::cout << "\nStarting Tree Sort : " << std::endl;

	newTree.PrintInOrder();

	// Add Elements.
	for (int i = 0; i < 10; i++)
	{
		newTree.AddLeaftotree(TreeSortElements[i]);
	}

	std::cout << "The Tree Sort has Finished and The elements are as follows :\n ";

	// Print Sorted Elemenets From The newTree In Sorted ascending Order.
	newTree.PrintInOrder();

	std::cout << std::endl;

	Task8 t8;

	std::cout << "\nAdjeceny list for unweighted";



	return 0; // Main Funciton always has to return 0;
}