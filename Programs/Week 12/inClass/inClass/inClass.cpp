#include <iostream>
using namespace std;

void printArray(const int *A, const int size)
{
	for (int i=0 ; i<size ; i++)
		cout << A[i] << " ";
	cout << endl;
}
void selectionSort(int *A, const int size)
{
	for (int i=0 ; i<size ; i++)
	{
		int index = i; // select index of minimum element among A[i], A[i+1],..., A[size-1]
		for (int j=i+1 ; j<size ; j++)
		{
			if (A[j] < A[index])
				index = j;
		}
		int temp = A[i];
		A[i] = A[index];
		A[index] = temp;
	}
}
void bubbleSort(int *A, const int size)
{
	for (int i=0 ; i<size ; i++)
	{
		int count=0;
		//Bubble the largest element among A[0], A[1],...,A[size-1-i] up to its position at A[size-1-i]
		for (int j=0 ; j<size-1-i ; j++)
		{
			if (A[j] > A[j+1])
			{
				int temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
				count++;
			}
		}
		if (count==0)
			break;
	}
}
int main()
{
	
	int A[] = {6, 9, 2, 7, 5, 4, 8, 2, 4, 1};
	cout << "Original array ";
	printArray(A, 10);
	selectionSort(A, 10);
	cout << "Sorted array ";
	printArray(A, 10);
	cout << endl;
	int B[] = {6, 9, 2, 7, 5, 4, 8, 2, 4, 1};
	cout << "Original array ";
	printArray(B, 10);
	cout << "Bubble sorting ";
	bubbleSort(B, 10);
	printArray(B, 10);
	system("Pause");
	return 0;
	
}
