#include <iostream> // Used for cout
#include "Task1.h"
#include "Task3.h"
#include "Task4.h"
using namespace std;


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
	cout << "Task 1 \n" << endl;
	Task1 t1;
	t1.FindFactorial();
	t1.FindTrailings();

	cin.ignore(); // Ignores Previous cin from the User
				  // Use this Before getline (cin, string);

	/* Task 3 */
	cout << "Task 2 \n" << endl;
	vector<string> Words; //Get the list
	Task3 t3;
	Words = t3.TakeUserString();
	t3.PrintWordsInReversedOrder(Words);

	/* Task 4 */

	Task4 t4;
	cout << " \n \nTask4 does a recursive linear Search for an Array Of Integers \n";
	t4.GetUserInput();
	// Ask The user for an element and See if it Exists in a list and find its position 
	// In the list.
	cout << "Please Insert a number to see it position in the list : " ;
	int key = 0;
	cin >> key; // User Entered element that Recursion will look for.

	int result = t4.RecursiveLinearSearch(t4.GetArray(), key, t4.GetSize());

	if (result == -1)
		cout << "The Entered Number is not found in an Array / list ";
	else
		cout << "The Number " << key << " Was found at the positon of " << ++result << endl;

	return 0; // Main Functon always has to return 0;
}
