#include<iostream>
using namespace std;
int main()
{
	cout << "We will find number of days between 2 interval which are [1,30]" << endl << "Let's get started" << endl;
	system ("Pause");
	int a, b, c;
	cout << "Please enter the initial day: ";
	cin >> a;
	cout << "Please enter the number of second interval: ";
	cin >> b;
	c = b - a;
	cout << "There are " << c << " days between day " << a << " and day " << b << endl;
	system("Pause");
	return 0;
}