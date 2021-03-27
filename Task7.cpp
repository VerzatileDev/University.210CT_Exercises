#include <iostream> // Cout
#include "Task7.h"

void Task7::takeTreeSortinput()
{
	std::cout << "Please Insert "<<size  <<"Element into Your Array" << std::endl;
	for (int i = 0; i < size; i++)
		std::cin >> Array[i];
}
// Struct - Makes types of data That can be on one data type and store/ Group of distinct data types.
struct TreeNode {
	int data;
	struct TreeNode* leftNode;
	struct TreeNode* RightNode;
};
