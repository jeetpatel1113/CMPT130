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
bool identityfunction(double **A, const int r, const int c)
{
	if (r==c)
		return true;
	else
		return false;
}
void transpose(double **A, const int r, const int c)
{
	
	int x;
	for (int i=0 ; i<r ; i++)
	{
		for (int j=i ; j<c ; j++)
		{
			x = A[i][j];
			A[i][j] = A[j][i];
			A[j][i] = x;
		}
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
	
	for (int i=0 ; i<r ; i++)
	{
		for (int j=0 ; j<c ; j++)
			cout << A[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	if (identityfunction(A,r,c))
	{
		transpose(A,r,c);
		for (int i=0 ; i<r ; i++)
		{
			for (int j=0 ; j<c ; j++)
				cout << A[i][j] << " ";
			cout << endl;
		}
	}
	else
		cout << "This cannot be transposed because its not identity function." << endl;
	for (int i=0 ; i<r ; i++)
		delete [] A[i];
	delete [] A;
	system ("Pause");
 	return 0;
}