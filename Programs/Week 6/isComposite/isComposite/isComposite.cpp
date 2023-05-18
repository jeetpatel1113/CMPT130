#include <iostream>
using namespace std;
bool isComposite(int x)
{
	for (int i=2 ; i<x ; i++)
		if (x%i==0)
			return true;
	return false;
}
int main()
{
	int n;
	do
	{
		cout << "Please enter a positive number which is greater than 1: ";
		cin >> n;
	} while (n<=1);

	cout << isComposite(n) << endl;
	system ("Pause");
	return 0;
}