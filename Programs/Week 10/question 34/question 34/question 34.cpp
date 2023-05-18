#include <iostream>
#include <ctime>
using namespace std;
double sumofrows(double **A, int rindex, int c)
{
	double sum=0;
	for (int i=0 ; i<c ; i++)
	{
		sum+=A[rindex][i];
	}
	cout << sum << endl;
	return sum;
}
void printMatrix(double **A, int r, int c)
{
	for (int i=0 ; i<r ; i++)
	{
		for (int j=0 ; j<c ; j++)
			cout << A[i][j] << " ";
		cout << endl;
	}
	return;
}
bool comparesumofrow(double **A, int r, int c)
{
	double sum1;
	sum1 = sumofrows(A, 0, c);
	for (int i=1 ; i<r ; i++)
	{
		double sum2 = sumofrows(A, i, r);
		if (sum1!=sum2)
			return false;
	}
	return true;
}

int main()
{
	srand(time(0));
	double **A;
	int r, c;
	cout << "Please enter the row and column: ";
	cin >> r >> c;
	A = new double*[r];
	for (int i=0 ; i<r ; i++)
	{
		A[i] = new double[c];
	}
	for (int i=0 ; i<r ; i++)
		for (int j=0 ; j<c ; j++)
			A[i][j] = rand()%(9-0+1)+0;
	printMatrix(A, r, c);
	cout << comparesumofrow(A, r, c) << endl;

	for (int i=0 ; i<r ; i++)
		delete[] A[i];
	delete[] A;
	system ("Pause");
	return 0;
}