#include <iostream>
using namespace std;
int main()
{
	cout << "This is the program for finding out Simple Interest of a given ammount, rate and time." << endl;
	cout << "Please input the following items: " << endl;
	double si, am, rate, tim;
	cout << "Ammount: ";
	cin >> am;
	cout << "Rate of Interest: ";
	cin >> rate;
	cout << "Period in years: ";
	cin >> tim;
	si = (am * rate * tim )/100;
	cout << "The Simple Interest of the given ammount is: $" << si;
	system("Pause");
	return 0;
}