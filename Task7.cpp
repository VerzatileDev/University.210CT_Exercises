#include <iostream> // Cout
#include "Task7.h"

/* Binary Search Tree
   On Binary Tree There can only be Two Child Nodes.
   Notes:

   using In order Traversal Using recursion.
   Root Initially starts with Null,
   Each Node has Value, Pointer to Left Node, Pointer to Right node.
   If the Pointer Has nothing it means it Points to Nothing,.
   End of the Tree is called Leafs Full Binary Tree.
   Larger Elements Get Pointed Right and Smaller Ones from Root are Pointer to Left. Starts Looking From Left.
   
   The IDea of the Sort is the Have an initial Array Elements, and Print these elements in Order.
   Meaning " Where we Get Elements as Input That We want to have Sorted, Which then Traverses The Tree In order, which gives us the Elements Output,
   in The Sorted Order. "



   Set up Initial Information For Nodes
   Set Default Value at the Start of the Tree. TreeRoot = Null;
   Create A Leaf for the Tree
   Add Leaf To Tree,  Is where Data is passed to AddLeafFunction Where it is Proccessed.
   Add a Leaf to Tree
   In order Print 

   Print In order Is Called I source.cpp and itside is the Function that proceeses and checks pointers.


*/

// Set Tree Root To Nothing By Default When Tree is created.
Task7::Task7()
{
	TreeRoot = NULL; // At the Start of the Tree Set Root to NUll meaning "Nothing ".
}

// Create A New Node.
Task7::TreeNode* Task7::CreateTreeNode(int data)
{
	TreeNode* n = new TreeNode;
	n->data = data;
	n->leftNode = NULL; // Set The Trees Left Node to NULL. Pointing to Nothing.
	n->RightNode = NULL; // Set The Trees Right Node to NULL. Pointing to Nothing.

	return n;
}

void Task7::AddLeaftotree(int data)
{
	// Searches the Value that we Give in Data and Pass TreeRoot Pointer.
	AddLeaffunc(data, TreeRoot);
}

void Task7::AddLeaffunc(int data, TreeNode* Ptr)
{
	//If Tree is equal to Empty
	if (TreeRoot == NULL)
	{
		// Point to Newly Pointed TreeLeaf. after creating a New Left For tree.
		TreeRoot = CreateTreeNode(data);
	}
	// If data Is less than The Pointed Data then . 
	else if (data < Ptr-> data)
	{
		// If Right Is already Pointing Do something 
		// Calls Recursevily 
		if (Ptr->leftNode != NULL)
		{
			AddLeaffunc(data, Ptr->leftNode);
		}
		// if there is Nothing in The position add It to Tree
		else
		{
			Ptr->leftNode = CreateTreeNode(data);
		}
	}
	//If Data is Bigger/Higher than Current Pointer Data/ Element then.
	else if (data > Ptr->data)
	{
		//
		if (Ptr->RightNode != NULL)
		{
			// Pass in Data to The Current RightNode Child.
			AddLeaffunc(data, Ptr->RightNode);
		}
		// if there is Nothing in The position add It to Tree
		else
		{
			Ptr->RightNode = CreateTreeNode(data);
		}
	}
	// Else When The Data is ==
	else
	{
		std::cout << "Data/ Element Already In Tree\n";
	}
}

// Call PrintInOrderFunction.
void Task7::PrintInOrder()
{
	PrintInOrderfunc(TreeRoot);
}


void Task7::PrintInOrderfunc(TreeNode* Ptr)
{
	// If the TreeRoot is No longer NULL, Follow Steps.
	if (TreeRoot != NULL)
	{
		//Go left In the Trees LeftNode If Left Node Is not empty "Nothing "
		if (Ptr->leftNode != NULL)
		{
			// Start over again.
			PrintInOrderfunc(Ptr->leftNode);
		}
		// Print Value Sorted.
		std::cout << Ptr->data << " ";
		// Right Node is not Pointing to Empty "Nothing"
		if (Ptr->RightNode != NULL)
		{
			// Start over again.
			PrintInOrderfunc(Ptr->RightNode);
		}
	}
	else {
		std::cout<<"Tree is Currently Empty\n";
	}
}