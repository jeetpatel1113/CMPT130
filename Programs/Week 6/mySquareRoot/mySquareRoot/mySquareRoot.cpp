#include <iostream>
using namespace std;
double f(double a, double x)
{
	return x*x-a;
}
double mySquareRoot(int a)
{
	double x1=0.0, x2=a+1;
	// Now f(x) = x2 - a gives f(x1)<0 and f(x2)>0
	while (true)
	{
		double xm = (x1+x2)/2;
		if (abs(f(a,xm) < 0.0001))
			return xm;
		else if (f(a,xm) < 0)
			x1=xm;
		else
			x2=xm;
	}
}
int main()
{
	system ("Pause");
	return 0;
}