#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int* addarray(const int *A, const int *B, const int sizeofA, const int sizeofB)
{
	/*
	int sizeofC = sizeofA + sizeofB;
	int *C = new int [(sizeofC)];
	
	for (int i=0 ; i<sizeofA ; i++)
		C[i] = A[i];
	for (int i=sizeofA ; i<(sizeofA + sizeofB) ; i++)
	{
		C[i] = B[i-sizeofA];
	}
	return C;
	*/
	int *C = new int [sizeofA + sizeofB];
	int k=0;
	for (int i=0 ; i<sizeofA ; i++)
		C[k++] = A[i];
	for (int i=0 ; i<sizeofB ; i++)
		C[k++] = B[i];
	return C;
}
int main()
{
	int *A, *B, arraySizeofA, arraySizeofB, *C;
	cout << "Please enter the sizes of array A and B: ";
	cin >> arraySizeofA >> arraySizeofB;
	A = new int[arraySizeofA];
	B = new int[arraySizeofB];
	for (int i=0 ; i<arraySizeofA ; i++)
	{
		A[i] = rand()%(100-1) + 1;
		cout << A[i] << "  ";
	}
	cout << endl;
	for (int i=0 ; i<arraySizeofB ; i++)
	{
		B[i] = rand()%(100-1) + 1;
		cout << B[i] << "  ";
	}
	cout << endl;
	C = addarray(A, B, arraySizeofA, arraySizeofB);
	for (int i=0 ; i<arraySizeofA+arraySizeofB ; i++)
		cout << C[i] << "  ";
	cout << endl;
	delete [] A;
	delete [] B;
	delete [] C;
	system ("Pause");
	return 0;
}