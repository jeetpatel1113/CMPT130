#include <iostream>
using namespace std;
bool isEven(int x)
{
	// Pre-condition:- take x as an integer
	// Post-condition:- return if it is divisible by 2 or not, true if yes, false if no
	bool a=false;
	if (x%2==0)
		a = true;	
	return a;
}
int main()
{
	int n;
	cout << "Please enter am integer to check out if it is even or odd: ";
	cin >> n;
	cout << isEven(n) << endl;
	system ("Pause");
	return 0;
}