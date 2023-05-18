#include <iostream>
using namespace std;
bool isComposite(int x)
{
	for (int i=2 ; i<x ; i++)
		if (x%i==0)
			return true;
	return false;
}
bool isPrime(int x)
{
	if (isComposite(x)==true)
		return false;
	return true;
}

int main()
{
	int n;
	do
	{
		cout << "Please enter a positive integer greater than 1: ";
		cin >> n;
	} while (n<=1);
	if (n<=1)
		cout << "Please enter a correct integer." << endl;
	else
	{
		bool ans = isPrime(n);
		if (ans == true)
			cout << "The number is prime." << endl;
		else
		cout << "The number is not prime." << endl;
	}
	system ("Pause");
	return 0;
}
