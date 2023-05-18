#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter value of n: ";
	cin >> n;
	int k = 0;
	int r = rand() % 21 + (-10);
	while ( k < n )
	{
		cout << r << endl;
		k++;
	}
	system ("Pause");
	return 0;
}