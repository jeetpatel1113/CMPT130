#include <iostream>
#include <ctime>
using namespace std;
void populateMatrix(double **A, const int r, const int c)
{
	for (int i=0 ; i<r ; i++)
		for (int j=0 ; j<c ; j++)
			A[i][j] = rand()%(9-0+1) + 0;
	return;
}
void printMatrix(double **A, const int r, const int c)
{
	for (int i=0 ; i<r ; i++)
	{
		for (int j=0 ; j<c ; j++)
			cout << A[i][j] << " ";
		cout << endl;
	}
	return;
}
void swapcol(double **A, int r, int c1, int c2)
{
	double x;
	for (int i=0 ; i<r ; i++)
	{
		x = A[i][c1];
		A[i][c1] = A[i][c2];
		A[i][c2] = x;
	}
	return;
}
int main()
{
	srand(time(0));
	int r, c;
	cout << "Please enter the row and column of the array: ";
	cin >> r >> c;
	double **A = new double *[r];
	for (int i=0 ; i<r ; i++)
		A[i] = new double[c];
	populateMatrix(A,r,c);
	printMatrix(A,r,c);
	cout << endl;
	int c1, c2;
	cout << "Please enter col1 and col2: ";
	cin >> c1 >> c2;
	swapcol(A,r,c1,c2);
	cout << endl;
	printMatrix(A,r,c);
	cout << endl;
	for (int i=0 ; i<r ; i++)
		delete [] A[i];
	delete [] A;
	system ("Pause");
 	return 0;
}