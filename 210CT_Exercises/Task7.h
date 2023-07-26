#pragma once

class Task7
{
private:
	// Set Treenode Information.
	// Struct - Makes types of data That can be on one data type and store/ Group of distinct data types.
	struct TreeNode 
	{
		int data; // incomming Node Value
		// TreeNode Pointers.
		TreeNode* leftNode;
		TreeNode* RightNode;
	};
	TreeNode* TreeRoot;// Set Top of the Tree " Root "
	void AddLeaffunc(int data, TreeNode* Ptr);
	void PrintInOrderfunc(TreeNode* Ptr);

public:
	Task7(); // TO set Intial Value To Variable FOr this TreeRoot = NULL; Called Constructor.
	TreeNode* CreateTreeNode(int data); // Value stored in data.
	void AddLeaftotree(int data); // Add Leaf
	void PrintInOrder(); // Call inorderFun.
};