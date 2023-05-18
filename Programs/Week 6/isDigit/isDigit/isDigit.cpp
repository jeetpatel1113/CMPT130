#include <iostream>
using namespace std;
bool isDigit(char x)
{
	// Pre-condition:- Enter x as char which is any character
	// Post-condition:- return true or false if x is digit or not
	// doubt: 300% prints true while 900% print false
	bool a=false;
	x>48 && x<57? a=true : a=false;
	return a;
}
int main()
{
	char n;
	cout << "Please enter anything to tell if it is digit or not: ";
	cin >> n;
	cout << isDigit(n) << endl;
	system ("Pause");
	return 0;
}