#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;
bool isPrime(int a)
{
	for (int i=2 ; i<a ; i++)
		if (a%i==0)
			return false;
	return true;
}
int primegiver(const int *A, const int size)
{
	int prime=0;
	for (int i=0 ; i<size ; i++)
		if (isPrime(A[i]))
			prime++;
	return prime;
}
int main()
{
	srand(time(0));
	int *A, arraySize;
	cout << "Please enter the size of the array: ";
	cin >> arraySize;
	A = new int[arraySize];
	for (int i=0 ; i<arraySize ; i++)
		A[i] = rand()%(100 -2) + 2;
	for (int i=0 ; i<arraySize ; i++)
		cout << A[i] << "  ";
	cout << endl;
	if (primegiver(A, arraySize)>0)
		cout << "A prime number is found the array " << endl;
	else
		cout << "No prime number is found the array " << endl;
	delete[] A;
	system ("Pause");
	return 0;
}