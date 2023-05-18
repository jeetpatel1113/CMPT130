#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void reArrangeArray(int A[], const int size)
{
	for (int i=0 ; i<size ; i++)
	{
		if (A[i]%2==0)
		{
			int temp=A[i];
			for (int j=i-1 ; j>=0 ; j++)
				A[j+1]=A[j];
			A[0]=temp;
		}
	}
	return;
}
/*
void reArrangeArray(int A[], const int size)
{
	int i=0, j=size-1;
	while (i<j)
	{
		while (i<size)
		{
			if (A[i]%2==0)
				i++;
		}
		while (j>=0)
		{
			if (A[j]%2!=0)
				j--;
		}
		if (i<j)
		{
			int temp=A[i];
			A[i] = A[j];
			A[j]=temp;
		}
		i++;
		j--;
	}
	return;
}
*/

int main()
{
	//Define an array
	const int SIZE = 20;
	int A[SIZE];

	//Populate the array with some integers in the range [0, 29]
	for (int i = 0; i < SIZE; i++)
		A[i] = rand() % 30;

	//Print the elements of the array
	cout << "Originally the elements of the array are" << endl;
	for (int i = 0; i < SIZE; i++)
		cout << A[i] << " ";
	cout << endl;

	//Re-arrange the array so that even integers are at the beginning
	reArrangeArray(A, SIZE);

	//Print the elements of the array
	cout << "After re-arranging the elements of the array are" << endl;
	for (int i = 0; i < SIZE; i++)
		cout << A[i] << " ";
	cout << endl;

	system("Pause");
	return 0;
}