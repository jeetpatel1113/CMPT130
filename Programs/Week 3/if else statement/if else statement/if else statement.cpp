#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "Enter an integer: ";
	cin >> x;
	if (x >=0)
	{
		cout << x << endl;
	}
	else
	{
		cout << -x << endl;
	}
	system ("Pause");
	return 0;
}