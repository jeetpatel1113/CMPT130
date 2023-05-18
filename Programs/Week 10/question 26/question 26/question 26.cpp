#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
bool isFound(const int *A, const int size, int x)
{
	for (int i=0 ; i<size ; i++)
		if (A[i]==x)
			return true;
	return false;
}
int countelements(const int *A, const int sizeA, const int *B, const int sizeB)
{
	int count=0;
	for (int i=0 ; i<sizeA ; i++)
	{
		if (isFound(B, sizeB, A[i]))
			count++;
	}
	return count;
}
int* AintersectionB(const int *A, const int sizeA, const int *B, const int sizeB, int& size)
{
	size=countelements(A, sizeA, B, sizeB);
	int *C = new int [size];
	int k=0;
	for (int i=0 ; i<sizeA ; i++)
	{
		if (isFound(B, sizeB, A[i]))
			C[k++] = A[i];
	}
	return C;
}
int main()
{
	int *A, *B, *C, sizeofA=16, sizeofB=14, a;
	A = new int [sizeofA];
	B = new int [sizeofB];
	for (int i=0 ; i<sizeofA ; i++)
	{
		A[i] = rand()%(100-1) +1;
		cout << A[i] << "  ";
	}
	cout << endl;
	for (int i=0 ; i<sizeofB ; i++)
	{
		B[i] = rand()%(100-1) +1;
		cout << B[i] << "  ";
	}
	cout << endl;
	C = AintersectionB(A, sizeofA, B, sizeofB, a);
	for (int i=0 ; i<a ; i++)
		cout << C[i] << "  ";
	cout << endl;
	delete[] A;
	delete[] B;
	delete[] C;
	system("Pause");
	return 0;
}