#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int countdigits(const char *A, const int size)
{
	int digit=0;
	for (int i=0 ; i<size ; i++)
	{
		if (A[i]<57 && A[i]>48)
			digit++;
	}
	return digit;
}
int main()
{
	int arraySize;
	char *A;
	cout << "Please enter the size of the array: ";
	cin >> arraySize;
	A = new char [arraySize];
	for (int i=0 ; i<arraySize ; i++)
	{
		A[i] = rand()%(122 -48) + 48;
		cout << A[i] << "  ";
	}
	if (countdigits(A, arraySize)>0)
		cout << "A digit is found in the array. " << endl;
	else
		cout << "No digit character is found the array " << endl;
	delete[] A;
	system("Pause");
	return 0;
}