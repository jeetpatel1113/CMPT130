#include <iostream>
using namespace std;
void printPrimes(int x)
{
	
	for (int i=2 ; i<x ; i++)
	{
		int cou=0;
		for (int j=2 ; j<i ; j++)
		{
			if (i%j==0)
				//cout << i << j << endl;
				cou++;
			
		}
		if (cou==0)
				cout << i << endl;
	}
	return;
}
int main()
{
	int n;
	do
	{
		cout << "Please enter a positive number more than 2: ";
		cin >> n;
	} while (n<2);

	printPrimes(n);
	system("Pause");
	return 0;
}