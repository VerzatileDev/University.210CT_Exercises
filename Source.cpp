#include <iostream> // Used for cout
#include "Task1.h"
#include "Task2.h"
#include "Task3.h"
#include "Task4.h"
#include "Task5.h"



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
	std::cin >> key; // User Entered element that Recursion will look for.

	int result = t4.RecursiveLinearSearch(t4.GetArray(), key, t4.GetSize());

	if (result == -1)
		cout << "The Entered Number is not found in an Array / list ";
	else
		cout << "The Number " << key << " Was found at the positon of " << ++result << std::endl;

	/* Task 5 */
	Task5 t5;
	// Using std::  as a practise to stop using Namespace std; Eventhough for
	//the current example it is not nessecary.

	std::cout << "\nTask 5 : \n " << std::endl;


	std::cout << "The Starting Array Elements are : " << std::endl;
	// Tell user the Elements inside the Given Array
	t5.tellArray();
	std::cout << "Starting BubbleSort\n " << std:: endl;
	t5.runBubbleSort();  //can call methods not function.
	

	return 0; // Main Functon always has to return 0;
}
