#include <iostream>
using namespace std;
int main()
{
	int n, j;
	cout << "Enter number n: " << endl;
	cin >> n;
	for(;;)
	{
	for (int i=1; i<=n ; i++)
	{
		for (j=0 ; j<i ; j++)
			cout << '*';
		cout << endl;
	}
	for (int i=n ; i>=0 ; i--)
	{

		for (j=0 ; j<i-1 ; j++)
			cout << '*';
		cout << endl;
	}
	}
	system("Pause");
	return 0;
}