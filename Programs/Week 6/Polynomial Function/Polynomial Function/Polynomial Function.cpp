#include <iostream>
using namespace std;
float f(const float a, const float b, const float c, const float d, const float x)
{
	float s= a*x*x*x + b*x*x + c*x + d;
	return s;
}
int main()
{
	float a, b, c, d;
	cout << "Enter the coefficients of the cubic polynomial (a, b, c, d): ";
	cin >> a >> b >> c >> d;
	//Now let us find f(x) for ten different values of x
	float x;
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter value of x ";
		cin >> x;
		cout << "The value of f(" << x << ") = " << f(a,b,c,d,x) << endl;
	}
	system("Pause");
	return 0;
}