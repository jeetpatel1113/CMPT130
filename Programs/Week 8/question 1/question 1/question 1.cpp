#include <iostream>
using namespace std;
void figure_me_out(int& x, int y, int& z)
{
	cout << "Entering function: " << x << ", " << y << ", " << z << endl;
	x = 1;
	y = 2;
	z = 3;
	cout << "Exiting function: " << x << ", " << y << ", " << z << endl;
}
int main()
{
	int a = 10, b = 20, c = 30;
	cout << "Main Program before function call: " << a << ", " << b << ", " << c << endl;
	figure_me_out(a, b, c);
	cout << "Main Program after function call: " << a << ", " << b << ", " << c << endl;
	system ("Pause");
	return 0;
}