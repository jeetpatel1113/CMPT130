#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	/*
	for ( int k = 0; k<=28 ; k=k+2 )
	{
		cout << k << endl;
	}
	*/
	/*
	int n;
		cout << "Enter number n: ";
	cin >> n;
	for ( int k=n ; k>0 ; k-- )
		cout << k << endl;
	*/
	/*
	int n;
	cout << "How many random numbers do you want: ";
	cin >> n;
	for (int i=0; i<n ; i++)
	{
		int r = rand()%21 + -10;
		cout << r << endl;
	}
	*/
	/*
	int i = 0;
	while (i>0)
	{
		int r = rand()%21 + -10;
		cout << r << endl;
	}
	*/
	/*
	int n;
	cout << "How many random numbers do you want: ";
	cin >> n;
	// Initialize the sum and product
	int sum=0, product=1;
	// Initialize the minimum
	int r = rand()%21 + -10;
	cout << r << endl;
	int min=r;
	// Put the first number in the sum and product
	sum+=r;
	product*=r;
	// Now generate the remaining n-1 numbers
	for ( int k=0 ; k<n-1 ; k++)
	{
		r = rand()%21 +-10;
		cout << r << endl;
		sum += r;
		product*=r;
		if ( r< min)
			min=r;
	}
	cout << "The sum is " << sum << endl;
	cout << "The product is " << product << endl;
	cout << "The minimum value is " << min << endl;
	*/
	/*
	int  a, b;
	a = rand()%26 + -10;
	b = rand()%26 + -10;
	if (a>b)
	{
		a = a+b;
		b = a-b;
		a = a-b;
	}
	for (int k = a+1; k<b ; k++)
		cout << k << endl;
	*/
	/*
	for (int k = 7; k%41!=0 ;k+=3)
		cout << k << endl;
	*/
	/*
	int n;
	cout << "Enter a number greater tan 1: " << endl;
	cin >> n; // Assume user input is > 1
	int cou=0;
	for ( int k = 2; k<n ; k++)
	{
		if (n%k == 0)
		{
			cou++;
		}
	}
	if (cou>0)
	{
		cout << n << " is not prime. " << endl;
	}
	else
	{
		cout << n << " is prime. " << endl;
	}
	*/
	/*
	int x;
	cout << "Enter a positive number: ";
	cin >> x;
	for(;x<=0;)
	{
		cout << "\t" << "Error!" << "Please enter a positive number: ";
		cin >> x;
	}
	*/
	
	system ("Pause");
	return 0;
}

