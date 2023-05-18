#include <iostream>
using namespace std;
int main()
{
	int pa, roi, t, ta;
	cout << "Please enter principal amount and time period: " << endl;
	cin >> pa >> t;
	if ( pa<0 || t<0 )
	{
		cout << "Please enter a valid entry." << endl;
	}
	else
	{
		if (pa<=0.00 && pa>1000.00)
		{
			roi = 2.5;
			ta = pa * (1.0 + roi * t);
			cout << ta << endl;
		}
		else if (pa<=1000.00 && pa>10000.00)
		{
			roi = 2.0;
			ta = 1.0*pa * (1.0 + roi * t);
			cout << ta << endl;
		}
		else if (pa<=10000.00 && pa>100000.00)
		{
			roi = 1.5;
			ta = pa * (1.0 + roi * t);
			cout << ta << endl;
		}
		else if (pa>=100000.00)
		{
			roi = 1.0;
			ta = pa * (1.0 + roi * t);
			cout << ta << endl;
		}
	}
	system ("Pause");
	return 0;
}