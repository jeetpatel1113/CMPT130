#include <iostream>
using namespace std;
bool allPrimes(int x)
{
	int cou=0;
	for (int i=1 ; i<=x ; i++)
	{
		int r=rand()%(200-2+1)+2;
		cout << r << endl;
		for (int j=2 ; j<r ; j++)
			if (r%j==0)
				cou++;
	}
	if (cou==0)
			return true;
		else
			return false;
}
int main()
{
	int n;
	do
	{
		cout << "Please enter a positive number: ";
		cin >> n;
	} while(n<0);
	
	cout << allPrimes(n) << endl;
	system ("Pause");
	return 0;
}