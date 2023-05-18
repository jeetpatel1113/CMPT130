#include <iostream>
#include <ctime>
using namespace std;

float** createMatrix(const int R, const int C)
{
	float **M = new float*[R];
	for	(int i = 0; i < R; i++)
		M[i] = new float[C];
	return M;
}

void populateMatrix(float **M, const int R, const int C)
{
	for (int i = 0; i < R; i++)
		for (int j = 0; j < C; j++)
			M[i][j] = (rand() % 6) + 1;
	return;
}

void printMatrix(float **M, const int R, const int C)
{
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cout << M[i][j] << "\t";
		}
		cout << endl;
	}
}

float** getMatrixSum(float **A, float **B, const int R, const int C)
{
	float **S = createMatrix(R, C);
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			S[i][j] = A[i][j] + B[i][j];
		}
	}
	return S;
}

void deleteMatrix(float **M, const int R)
{
	for (int i = 0; i < R; i++)
		delete[] M[i];
	delete[] M;
	return;
}

int main()
{
	//Seed the random number generator
	srand(time(0));

	//Ask matrix dimensions
	int R, C;
	cout << "Enter matrix row and column sizes ";
	cin >> R >> C;
	//Create two matrices of equal size
	float **A = createMatrix(R, C);
	float **B = createMatrix(R, C);

	//Populate the elements of the matrices with random integers [1, 6]
	populateMatrix(A, R, C);
	populateMatrix(B, R, C);

	//Print the matrices
	cout << "Matrix A is " << endl;
	printMatrix(A, R, C);
	cout << endl << endl;

	cout << "Matrix B is " << endl;
	printMatrix(B, R, C);
	cout << endl << endl;

	//Compute the sum of the matrices A and B and put the result in matrix S
	float **S = getMatrixSum(A, B, R, C);

	//Print matrix S
	cout << endl << endl;
	cout << "Matrix S is " << endl;
	printMatrix(S, R, C);
	cout << endl << endl;

	//Delete the matrices A, B, and S
	deleteMatrix(A, R);
	deleteMatrix(B, R);
	deleteMatrix(S, R);

	system("Pause");
	return 0;
}
