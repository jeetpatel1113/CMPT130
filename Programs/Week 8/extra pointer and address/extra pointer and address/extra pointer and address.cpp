#include <iostream>
using namespace std;
int main()
{
	/*
	int a=6;
	int *b=&a;
	cout << &a << endl;
	cout << *b << endl;
	delete 10F7EA49;
	*/

	int a = 1, b = 2, c =3;
int *d = &a, *e = &b, *f = &c;
int &g = a; 
int &h = b; 
int &k = c;
cout << a << ", " << b << ", " << c << endl << d << ", " << e << ", " << f << endl << g << ", " << h << ", " << k << ", " << endl;
*e = k;
e = &h;
*d = h;
cout << a << ", " << b << ", " << c << endl << d << ", " << e << ", " << f << endl << g << ", " << h << ", " << k << ", " << endl;
	system ("Pause");
	return 0;
}