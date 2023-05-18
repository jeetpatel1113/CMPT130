#include <iostream>
#include<cstdlib>
#include <ctime>
using namespace std;
int main()
{
	char x;
	int y;
	cout << "Please Enter any symbol: " << endl;
	cin >> x;
	y = static_cast<int> (x);
	if ( y >= 48 && y <= 57 )
	{
		cout << "This symbol " << x << " is NUMERIC value." << endl;
	}
	else if ( y >= 65 && y <= 90 )
	{
		cout << "This symbol " << x << " is UPPER CASE value." << endl; 
	}
	else if ( y >= 97 && y <= 122 )
	{
		cout << "This symbol " << x << " is LOWER CASE value." << endl; 
	}
	else
	{
		cout << "This symbol " << x << " is non numeric and non alpha value." << endl;
	}
	system ("Pause");
	return 0;
}