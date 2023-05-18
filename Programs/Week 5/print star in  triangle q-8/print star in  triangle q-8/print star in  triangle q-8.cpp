#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter number of rows: ";
	cin >> n;
	for (int i=1 ; i<=n ; i++)
	{
		for ( int j=0 ; j<10-i ; j++)
			cout << " ";
		for ( int j=0 ; j<i ; j++)
			cout << "*";
		cout << endl;
	}
	system ("pause");
	return 0;
}