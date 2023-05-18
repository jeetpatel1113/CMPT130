#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;
int main()
{
	float a, b, c, area, s, i;
	cout << "Please enter 3 sides of triangle: " << endl;
	cin >> a >> b >> c;
s = 1.0*(a+b+c)/2;
	cout << s << endl;
	i = (s*(s-a)*(s-b)*(s-c));
	cout << i << endl;
	if ( a<b+c && b<a+c && c<a+b )
	{
		area = sqrt(i);
		cout << area << endl;
	}
	system ("Pause");
	return 0;
}