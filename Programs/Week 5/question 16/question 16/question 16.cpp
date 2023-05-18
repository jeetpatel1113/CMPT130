#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	do
	{
		cout << "Please Enter a positive value: " << endl;
		cin >> n;
	} while (n<0);

	for (int i=1 ; i<=2*n-1 ; i++)
	{
		for (int j=1 ; j<=n-abs(n-i) ; j++)
			cout << j;
		cout << endl;
	}
	system ("Pause");
	return 0;
}