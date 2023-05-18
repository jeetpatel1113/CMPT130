#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter number of rows: ";
	cin >> n;
	for (int i=n ; i>=1 ; i--)
	{
		for ( int j=0 ; j<10-i ; j++)
			cout << " ";
		for ( int j=0 ; j<(2*i-1) ; j++)
			cout << "*";
		for ( int j=0 ; j<10-i ; j++)
			cout << "1";
		cout << endl;
	}
	system ("pause");
	return 0;
}