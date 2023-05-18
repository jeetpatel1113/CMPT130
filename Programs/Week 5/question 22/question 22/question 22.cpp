#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	do
	{
	cout << "Please enter a positive number: ";
	cin >> n;
	}while (n<0);

	for (int i=1 ; i<=2*n-1 ; i++)
	{
		for (int j=1 ; j<=n-abs(n-i) ; j++)
			cout << "* ";
		for (int j=1 ; j<=2*abs(n-i)-1 ; j++)
			cout << "  ";
		for (int j=n-abs(n-i) ; j>=1 ; j--)
		{
			if (j>5)
				continue;
			cout << "* ";
		}
		cout << endl;
	}
	system ("Pause");
	return 0;
}