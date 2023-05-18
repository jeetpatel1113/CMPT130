#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter number of rows: ";
	cin >> n;
	for (int i=1 ; i<=n ; i++)
	{
		for (int j=0 ; j<n-i ; j++)
			cout << '\t';
		for (int j=1 ; j<=i ; j++)
			cout << i*j << '\t';
		cout << endl;
	}
	system ("pause");
	return 0;
}