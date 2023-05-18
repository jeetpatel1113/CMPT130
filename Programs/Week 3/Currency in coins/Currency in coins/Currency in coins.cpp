#include <iostream>
using namespace std;
int main()
{
	double a, to, lo, qu, di, ni, pe;
	cout << "Please enter money ammount: ";
	cin >> a;
	int x = a*100; // now x is ammount of money in cents.
	to = x/200;
	x = x%200;
	lo = x/100;
	x = x%100;
	qu = x/25;
	x = x%25;
	di = x/10;
	x = x%10;
	ni = x/5;
	x = x%5;
	pe = x/1;
	x = x%1;
	cout << a << "$ must print " << to << " toonies, " << lo << " loonie, " << qu << " quarters, " << di << " dime, " << ni << " nickel and " << pe << " pennies. " << endl;
	system ("Pause");
	return 0;
}