# include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter an integer: ";
	cin >> n;
	int k = n;
	while ( k > 0 )
	{
		cout << k << endl;
		k--;
	}
	system ("pause");
	return 0;
}