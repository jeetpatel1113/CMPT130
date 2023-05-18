#include <iostream>
using namespace std;
void printIncreasingOrder(float x, float y, float z)
{
	// Pre-condition:- take 3 float numbers
	// Post-condition:- return nothing but cout in assending order
	if (x>y && x>z)
	{	
		if (y>z)
			cout << x << ' ' << y << ' ' << z << endl;
		else
			cout << x << ' ' << z << ' ' << y << endl;
	}
	else if (y>x && y>z)
	{
		if (x>z)
			cout << y << ' ' << x << ' ' << z << endl;
		else
			cout << y << ' ' << z << ' ' << x << endl;
	}
	else
	{
		if (x>y)
			cout << z << ' ' << x << ' ' << y << endl;
		else
			cout << z << ' ' << y << ' ' << x << endl;
	}
	return;

}
int main()
{
	float a, b, c;
	cout << "Please enter 3 numbers: ";
	cin >> a >> b >> c;
	printIncreasingOrder(a,b,c);
	system("Pause");
	return 0;
}