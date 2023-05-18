#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	do
	{
		cout << "Please enter a positive number: " << endl;
		cin >> n;
	} while (n<0);

	for (int i=1 ; i<=2*n-1 ; i++)
	{
		for (int j=1 ; j<=n-abs(n-i) ; j++)
			cout << "  ";
		for (int j=1 ; j<=2*abs(n-i)+1 ; j++)
			cout << "* ";
		cout << endl;
	}
	system ("Pause");
	return 0;
}