#include <iostream>
using namespace std;
int main()
{
	int x, a ,b1, b2, b3, b4, b5, b6, b7, b8;
	cout << "Please Input integer: ";
	cin >> x;
	b8 = x%2;
	a=x/2;
	b7 = a%2;
	a=a/2;
	b6 = a%2;
	a=a/2;
	b5 = a%2;
	a=a/2;
	b4 = a%2;
	a=a/2;
	b3 = a%2;
	a=a/2;
	b2 = a%2;
	a=a/2;
	b1 = a%2;
	a=a/2;
	cout << "The binary of " << x << " will be " << b1 << b2 << b3 << b4 << b5 << b6 << b7 << b8 << "." << endl;
	system ("pause");
	return 0;
	// if we want remainder, we will use x=q*y+r, if we want to find r, we use r= x-(q*y) , r= x - (x/y *y)
}