#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void populateArray(int *A, const int size)
{
	for (int i=0 ; i<size ; i++)
		A[i]=rand()%(50-0+1) + 0;
	return;
}
int evencounter(int *A, const int size)
{
	int even=0;
	for (int i=0 ; i<size ; i++)
	{
		if (A[i]%2==0)
			even+=1;
	}
	return even;
}
void printArray(int *A, const int size)
{
	for (int i=0 ; i<size ; i++)
		cout << A[i] << "  ";
	cout << endl;
	return;
}
int main()
{
	srand(time(0));
	int arraySize, even=0, odd=0;
	cout << "Please enter the size of the Array: ";
	cin >> arraySize;
	int *A = new int[arraySize];
	populateArray(A, arraySize);
	even = evencounter(A, arraySize);
	cout << "Number of even numbers in the following Array: " << endl;
	printArray(A , arraySize);
	cout << "Number of even numbers are: " << even << " And the number of odd is: " << arraySize-even << endl;
	delete [] A;
	system ("Pause");
	return 0;
}