#include <iostream>
#include <cmath>
using namespace std;
int reversedInteger(int x)
{
	// Pre-condition:- x is input any integer
	// Post-condition:- return y which is reverse of x
	int y=0;
	while (x!=0)
	{
		y = y * 10;
		y = y + x % 10;
		x = x / 10;
	}
	return y;
}
int main()
{
	int n;
	cout << "Please enter an integer: ";
	cin >> n;
	cout << reversedInteger(n) << endl;
	system ("Pause");
	return 0;
}