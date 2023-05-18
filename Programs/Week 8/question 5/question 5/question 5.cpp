#include <iostream>
using namespace std;
void foo(int &m, int n, int *x, int *y)
{
	x = y;
	*y = 7;
	m = 8;
	n = *x;
	cout << m << ", " << n << ", " << *x << ", " << *y << endl;
	return;
}
int main()
{
	int a = 3, b = 5;
	int *p = &a, *q = &b;
	cout << *p << ", " << *q << endl;
	foo(a, b, p, q);
	cout << a << ", " << b << endl;
	system ("Pause");
	return 0;
}