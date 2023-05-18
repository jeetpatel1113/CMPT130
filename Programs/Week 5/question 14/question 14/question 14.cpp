#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	do
	{
	cout << "Enter a positive number: " << endl;
	cin >> n;
	} while (n<=0);

	for (int i=1 ; i<=n ; i++)
	{
		for (int j=n-i ; j>=0 ; j--)
			cout << ' ';
		for ( int j=1 ; j<=2*i-1 ; j++)
		{
			j>i? cout << i-abs(i-j) : cout << j;
		}
		cout << endl;
	}
	system ("Pause");
	return 0;
}