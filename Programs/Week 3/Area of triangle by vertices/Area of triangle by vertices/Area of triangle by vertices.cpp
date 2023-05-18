#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main()
{
	float x1, x2, x3, y1, y2, y3, d1, d2, d3, i, s, area;
	d1 = pow((pow(x1-x2 , 2) + pow(y1-y2 , 2)),(static_cast<float>(1)/2));
	d2 = pow((pow(x2-x3 , 2) + pow(y2-y3, 2)),(static_cast<float>(1)/2));
	d3 = pow((pow(x1-x2 , 2) + pow(y1-y2 , 2)),(static_cast<float>(1)/2));

	s = 1.0*(d1+d2+d3)/2;
	cout << s << endl;
	i = (s*(s-d1)*(s-d2)*(s-d3));
	cout << i << endl;
	if ( d1<d2+d3 && d2<d1+d3 && d3<d1+d2 )
	{
		area = sqrt(i);
		cout << area << endl;
	}
	system ("Pause");
	return 0;
}