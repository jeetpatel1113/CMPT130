#include <iostream>
using namespace std;
int main()
{
	int sum1=0, sum2=0;
	for (int k=0; k<10 ; k++)
	{
		sum1+=(k+1);
	}
	cout << sum1 << endl;
	int k=0;
	do
	{
		sum2+=(k+1);
		k++;
	}while(k<10);
	cout << sum2 << endl;
	system ("Pause");
	return 0;
}