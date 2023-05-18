#include <iostream>
using namespace std;
int main()
{
	float co1=0, co2=0, su1=0, su2=0;
	for (float k=1.0; k<=10; k++)
	{
		su1+=k;
		co1++;
		k++;
	}
	cout << su1/co1 << endl;
	float k=1;
	do
	{
		su2+=k;
		co2++;
		k++;
	}while(k<=10);
	cout << su2/co2 << endl;
	system ("Pause");
	return 0;
}