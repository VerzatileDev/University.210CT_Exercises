#include "Task2.h"

// Functions for Addition
// Subtraction and Muliplication Matrix

// Matrices have to be in the Same Order.
void Task2::addition()
{
	// Two Rows 1 collom  Two matricies
	// A  C
	// B  D 
	// Matrix one
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int a[2][2] = { {A, C},{B,D} };
	//A C
	//B D
	// Matrix
	

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; ++j)
			cout << a[i][j] << " ";
	}
	std::cout << endl;
}
void Task2::substraction()
{

}
void Task2::multiplication()
{

}