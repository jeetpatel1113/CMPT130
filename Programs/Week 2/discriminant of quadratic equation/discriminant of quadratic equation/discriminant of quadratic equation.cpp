#include <iostream>
using namespace std;
int main()
{
	cout << "Hi" << endl << "This program will show how to discriminant a quadratic equation which is in ax^2 + bx + c = 0 format" << endl;
	cout << "Here we will have to add the co-fiecients of the equation in order to get discriminants." << endl;
	double a, b, c, dis;
	cout << "Please enter a: ";
	cin >> a;
	cout << "Please enter b: ";
	cin >> b;
	cout << "Please enter c: ";
	cin >> c;
	dis= (b * b) - (4 * a * c);
	cout << "Hence as per your input the equation is " << a << "x^2 + " << b << "x + " << c << "." << endl;
	cout << "So, the discriminant of given equation is: " << dis;
	system("Pause");
	return 0;

}