#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x1, x2, y1, y2, v;
	cout << "Please enter point P1 as P1(a,y1): " << endl;
	cin >> x1 >> y1;
	cout << "Please enter point P2 as P2(x2,y2): " << endl;
	cin >> x2 >> y2;
	v = pow((pow(x1-x2 , 2) + pow(y1-y2 , 2)),(static_cast<float>(1)/2));
	cout << v << endl;
	system ("Pause");
	return 0;
}