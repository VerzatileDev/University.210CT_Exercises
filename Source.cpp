#include <iostream> // Used for cout
#include "Task1.h"
#include "Task3.h"
using namespace std;


/* References Used for Every Bit of Code */
/* References are For problems Encountered and Understanding Part of code that were not previously understood.
* 
1. <https://www.tutorialspoint.com/cplusplus/cpp_data_types.htm> Differences between Unsigned long int and unsigned long long int
2. <https://stackoverflow.com/questions/6649852/getline-not-working-properly-what-could-be-the-reasonshttps://stackoverflow.com/questions/6649852/getline-not-working-properly-what-could-be-the-reasons>
   getline getting avoided by previous "cin"
3. <https://www.tutorialspoint.com/cplusplus/cpp_references.htm> C++ Reference  &string.

*/

int main()
{
	/* Each of the Exercises are Run through This Main Function from 1 to 9 */

	/* Task 1*/
	/*Take Class in Task1.h set new t1 then Find out Factorial and Trailings in the inserted number.*/
	/* Task 1 Take Input, Find Its Factorial Number and Trailing 0s.*/
	Task1 t1;
	t1.FindFactorial();
	t1.FindTrailings();

	cin.ignore(); // Ignores Previous cin from the User
				  // Use this Before getline (cin, string);

	/* Task 3 */

	/* Throughout This exercise it has been hard to understand
	* If It is supposed to Go through and Start from the Back of the 
	* List of Take the Words Store in a list, and just Put them 
	* backwards.
	*/

	vector<string> Words; //Get the list
	Task3 t3;
	Words = t3.TakeUserString();
	t3.Print_Words_In_Reverse_Order(Words);

	/* Task 4 */


	return 0;
}
