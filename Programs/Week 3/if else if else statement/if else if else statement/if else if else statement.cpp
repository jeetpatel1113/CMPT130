#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << " Enter an integer ";
	cin >> n;
	if (n >= 100)
	
		cout << "You entered a big positive number." << endl;
	
	else if (n <= -100)
	
		cout << "You entered a small positive number." << endl;
	
	else
	{
		if (n < 100 && n > 0)
			cout << "You entered a small positive number." << endl;
		else if (n > -100 && n < 0)
			cout << "You entered a small negative number." << endl;
		else
			cout << "You entered zero." << endl;
	}
	system ("Pause");
	return 0;
}