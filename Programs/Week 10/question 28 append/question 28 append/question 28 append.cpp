#include <iostream>
using namespace std;
void appendElement(int* &arr, int &arr_size, int e)
{
	int *X = new int[arr_size + 1];
	for (int i=0 ; i<arr_size ; i++)
		X[i]=arr[i];

	X[arr_size]=e;
	arr = X;
	arr_size++;
	return;
}
int main()
{
	int size = 0;
	int *A;
	for (int i = 0; i < 5; i++)
	{
		appendElement(A, size, 15+i);
		for (int i = 0; i < size; i++)
			cout << A[i] << " ";
		cout << endl;
	}
	delete [] A;
	system("pause");
	return 0;
}