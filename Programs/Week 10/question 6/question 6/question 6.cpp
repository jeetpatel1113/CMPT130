#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void populateArray(float *A, const int size)
{
	for (int i=0 ; i<size ; i++)
		A[i]=((1.0*rand())/RAND_MAX) *(1-(-1)) + -1;
	return;
}
void printArray(float *A, const int size)
{
	for (int i=0 ; i<size ; i++)
		cout << A[i] << "  ";
	cout << endl;
	return;
}
int main()
{
	srand(time(0));
	int arraySize, nve=0, pve=0;
	cout << "Please enter the size of the Array: ";
	cin >> arraySize;
	float *A = new float[arraySize];
	populateArray(A, arraySize);
	printArray(A, arraySize);
	for (int i=0 ; i<arraySize ; i++)
	{
		if (A[i]<0)
			nve+=1;
		else if(A[i]>=0)
			pve+=1;
	}
	cout << "Positive numbers are: " << pve << " and Negative numbers are: " << nve << endl;
	delete [] A;
	system ("Pause");
	return 0;
}