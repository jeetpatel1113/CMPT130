#include <iostream>
using namespace std;
int main()
{
	int n;
	do
	{
		cout << "Enter the value of n: " << endl;
		cin >> n;
	} while (n<=0);
	
	int count = 0, m=(n==1? n=2: n=n);
	while (count < n)
	{
		int d=0;
		for ( int k = 2 ; k < m ; k++ )
		{
			if (m%k==0)
				d++;
		}
		if (d==0)
		{
			cout << m << endl;
			count++;
		}
		m++;
	}
	system("Pause");
	return 0;
}