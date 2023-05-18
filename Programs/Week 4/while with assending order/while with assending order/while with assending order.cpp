#include <iostream>
using namespace std;
int main()
{
	int n, cou=1, b=0, x=0;
	cout << "Please enter number of integers you want to enter: " << endl;
	cin >> n;
	while ( n>=cou )
	{
		int a;
		cout << "Please enter number " << cou << ": ";
		cin >> a;
		if (a>b)
		{
			b=a;
		}
		else if (a<b)
		{
			x=1;
		}
		cou+=1;
	}
	if (x==0)
	{
		cout << "The numbers you entered are in increasing order. " << endl;
	}
	else if (x==1)
	{
		cout << "The numbers you entered are NOT in increasing order. " << endl;
	}
	system("Pause");
	return 0;
}