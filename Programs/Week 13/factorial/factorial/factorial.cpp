#include <iostream>
using namespace std;
int factorial(int n)
{
	//Pre-condition: n>=0
	if (n==0)
		return 1;
	else
		return n * factorial(n-1);
}

int main()
{
	int a;
	
	do
	{
		cout << "Enter a non-negative integer ";
		cin >> a;
	} while (a < 0);
	/*
	cout << "Enter a non-negative integer ";
	cin >> a;
	*/
	int x = factorial(a);
	cout << "The factorial of " << a << " is " << x << endl;
	system ("Pause");
	return 0;
}