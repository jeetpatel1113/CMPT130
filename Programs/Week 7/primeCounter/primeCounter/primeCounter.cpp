#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
bool isPrime(int a)
{
	for (int i=2 ; i<a ; i++)
		if (a%i==0)
			return false;
	return true;
}
int primeCounter (const int A[] , const int size)
{
	int count=0;
	for (int i=0 ; i<size ; i++)
	{
		if (isPrime(A[i]))
			count++;
	}
	return count;
}

int main()
{
	srand(time(0));
	const int a=5;
	int X[a];
	for (int i=0 ; i<5 ; i++)
	{
		X[i]=rand()%(20-2+1)+2;
		cout << X[i] << endl;
		cout << primeCounter(X,i) << " is the numer os " << endl;
	}
	system ("Pause");
	return 0;
}