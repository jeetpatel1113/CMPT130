#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
	srand(time(0));
	int arraySize, sum=0;
	cout << "Please enter size of the array: ";
	cin >> arraySize;
	int *A = new int[arraySize];
	for (int i=0 ; i<arraySize ; i++)
		A[i]=rand()%(10 - -10) + -10;
	for (int i=0 ; i<arraySize ; i++)
		cout << A[i] << "  ";
	for (int i=0 ; i<arraySize ; i++)
		A[i]=abs(A[i]);
	/*
	for (int i=0 ; i<arraySize ; i++)
	{
		cout << A[i] << "  ";
		sum+=A[i];
	}
	cout << "The sum of the numbers is: " << sum << endl;
	*/

	delete [] A;
	system ("Pause");
	return 0;
}