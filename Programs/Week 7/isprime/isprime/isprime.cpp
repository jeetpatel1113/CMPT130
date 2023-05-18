#include <iostream>
#include <ctime>
using namespace std;
bool isprime(int a)
{
	// Pre-condition: a is any integer
	// Post-condition: return a bool value if it is prime or not.
	for (int i=2 ; i<a ; i++)
	{
		if (a%i==0)
			return false;
	}
	return true;
}
int main()
{
	srand(time(0));
	int A[10];
	for (int i=0 ; i<10 ; i++)
	{
		A[i] = rand()%(10-2+1)+2;
		cout << A[i] << endl;
		if (isprime(A[i]))
			cout << A[i] << " is prime." << endl;
	}
	system ("Pause");
	return 0;
}