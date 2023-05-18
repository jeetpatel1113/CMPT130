#include <iostream>
using namespace std;
int main()
{
	int cou=0, sum=0, k=1;
	while (cou < 10)
	{
		sum=sum+k;
		k++;
		cou++;
	}
	cout << sum << endl;
	system ("Pause");
	return 0;
}