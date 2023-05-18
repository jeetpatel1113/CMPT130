#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	//Seed the random number generator
	srand(time(0));

	//Ask matrix dimensions
	int R, C;
	cout << "Enter matrix row and column sizes ";
	cin >> R >> C;
	//Create two matrices of equal size
	int **A = new int *[R];
	int **B = new int *[R];
	for	(int i = 0; i < R; i++)
	{
		A[i] = new int[C];
		B[i] = new int[C];
	}
	//Populate the elements of the matrices with random integers [1, 6]
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			A[i][j] = (rand() % 6) + 1;
			B[i][j] = (rand() % 6) + 1;
		}
	}
	//Print the matrices
	cout << "Matrix A is " << endl;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl << endl;

	cout << "Matrix B is " << endl;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cout << B[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl << endl;
	//Compute the sum of the matrices A and B and put the result in matrix S
	int **S;
	S = new int*[R];
	for	(int i = 0; i < R; i++)
		S[i] = new int [C];
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			S[i][j] = A[i][j] + B[i][j];
		}
	}
	//Print matrix S
	cout << endl << endl;
	cout << "Matrix S is " << endl;
	for	(int i = 0; i < R; i++)
	{
		for	(int j = 0; j < C; j++)
		{
			cout << S[i][j] << "\t";
		}
		cout << endl;
	}
	//Delete the matrices A, B, and S
	for (int i = 0; i < R; i++)
	{
		delete [] A[i];
		delete [] B[i];
		delete [] S[i];
	}
	delete [] A;
	delete [] B;
	delete [] S;
	system("Pause");
	return 0;
}
