#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int nvecounter(const int *A, const int size)
{
	int nve=0;
	for (int i=0 ; i<size ; i++)
		if (A[i]<0)
			nve++;
	return nve;
}
int main()
{
	srand(time(0));
	int *A, arraySize;
	cout << "Please enter size of the array: ";
	cin >> arraySize;
	A=new int[arraySize];
	for (int i=0 ; i<arraySize ; i++)
		A[i]=rand()%(5- -5) + -5;
	for (int i=0 ; i<arraySize ; i++)
		cout << A[i] << "  ";
	if (nvecounter(A, arraySize)>0)
		cout << "A negative number found in the array.";
	else
		cout << "No negative number found in the array.";
	system ("Pause");
	return 0;
}