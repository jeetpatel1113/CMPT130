#include <iostream>
#include <ctime>
using namespace std;
bool isFound(const int *A, const int size, const int a)
{
	for (int i=0 ; i<size ; i++)
		if (A[i]==a)
			return true;
	return false;
}
int countElements(const int *A, const int *B, const int sizeA, const int sizeB)
{
	int tot=0;
	for (int i=0 ; i<sizeA ; i++)
		if (isFound(B, sizeB, A[i]))
			tot++;
	return tot;
}

int main()
{
	srand(time(0));
	int sizeA, sizeB;
	cout << "Please enter the size of the array: ";
	cin >> sizeA >> sizeB;
	int *A = new int[sizeA];
	for (int i=0 ; i<sizeA ; i++)
		A[i] = rand()%(10-1) + 1;
	for (int i=0 ; i<sizeA ; i++)
		cout << A[i] << "  ";
	cout << endl;
	int *B = new int[sizeB];
	for (int i=0 ; i<sizeB ; i++)
		B[i] = rand()%(10-1) + 1;
	for (int i=0 ; i<sizeB ; i++)
		cout << B[i] << "  ";
	cout << endl;
	cout << "The number of elements in common are: " << countElements(A, B, sizeA, sizeB);
	cout << endl;
	delete[] A;
	delete[] B;
	system ("Pause");
	return 0;
}