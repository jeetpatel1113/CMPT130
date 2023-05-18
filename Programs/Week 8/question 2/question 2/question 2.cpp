#include <iostream>
using namespace std;
int main()
{
	int a = 1, b = 2, c =3;
	int *d = &a, *e = &b, *f = &c;
	int &g = a; 
	int &h = b; 
	int &k = c;
	*e = k;
	e = &h;
	*d = h;
	cout << g << ", " << b << ", " << *f << endl;
	system ("Pause");
	return 0;
}