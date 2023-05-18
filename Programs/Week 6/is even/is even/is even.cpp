#include <iostream>
using namespace std;
bool isEven(const int v)
{
	if(v==2*(v/2))
		return true;
	else
		return false;
}
int main()
{
	int n;
	cout << "Please enter a non-negative integer: ";
	cin >> n;
	if (n<0)
		cout << "Please enter a correct integer. Bye" << endl;
	else
	{
		if (isEven(n))
			cout << "The number is even." << endl;
		else
			cout << "The number is odd." << endl;
	}
	system ("Pause");
	return 0;
}