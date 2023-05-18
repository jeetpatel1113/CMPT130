#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	do
	{
		cout << "Please enter a positive number: " << endl;
		cin >> n;
	}while(n<0);

	for (int i=1 ; i<=2*n-1 ; i++)
	{
		for (int j=abs(n-i) ; j>=0 ; j--)
			cout << " ";
		for (int j=(2*n-1)-abs((2*n-1)-(2*i-1)) ; j>0 ; j--)
			cout << '*';
		cout << endl;
	}
	system ("Pause");
	return 0;
}