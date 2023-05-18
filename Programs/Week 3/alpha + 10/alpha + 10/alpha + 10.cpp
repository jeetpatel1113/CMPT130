#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	char r;
	cout << "Please enter any alphabet: " << endl;
	cin >> r;
	if ( r >=65 && r<=80 )
	{
		cout << static_cast<char> (r+10) << endl;
	}
	else if ( r>=81 && r<=90 )
	{
		cout << static_cast<char> (r-26+10) << endl;
	}
	system ("Pause");
	return 0;

}