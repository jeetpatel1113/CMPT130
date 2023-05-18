# include <iostream>
# include <cmath>
using namespace std;
int main()
{
	float a, b, c, d;
	cout << "This program will print ax2 + bx + c = 0, and find out how many roots it has." << endl << endl;
	cout << "Please enter value of a: ";
	cin >> a;
	cout << "Please enter value of b: ";
	cin >> b;
	cout << "Please enter value of c: ";
	cin >> c;
	d = (b*b) - (4*a*c);
	d = sqrt(d);
	if (d > 0)
	{
		cout << "There are 2 roots for the equation which are " << ((-b) + d) / (2.0*a) << " and " << ((-b) - d)/(2.0*a) << "." << endl;
	}
	else if (d < 0)
	{
		cout << "There are no roots." << endl;
	}
	else 
	{
		cout << "There is only one root which is " << ((-b) - d) / (2.0*a) << "." << endl;
	}
	system ("Pause");
	return 0;
}