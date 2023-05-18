#include <iostream>
using namespace std;
int main()
{
	double	a, b, c;
	if (a>b && a>c )
	{
		cout << a << " is the biggest value." << endl;
	}
	else if (b>a && b>c )
	{
		cout << b << " is the biggest value." << endl;
	}
	else
	{
		cout << c << " is the biggest value." << endl;
	}
	system ("Pause");
	return 0;
}