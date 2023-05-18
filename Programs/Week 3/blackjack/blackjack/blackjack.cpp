#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	srand(time(0));
	int r;
	int r1 = rand()%(13 - 1 +1 ) + 1;
	int r2 = rand()%(13 - 1 +1 ) + 1;
	int r3 = rand()%(13 - 1 +1 ) + 1;
	if ( r1>10 )
	{
		r1 = 10;
	}
	if (r2 >10)
	{
		r2 = 10;
	}
	if (r3>10)
	{
		r3 = 10;
	}
	r = r1+r2+r3;
	if (r>21)
	{
		cout << "Busted" << endl;
	}
	else if(r=21)
	{
		cout << "Black Jack" << endl;
	}
	else if (r<21)
	{
		cout << "The sum value if it is less than 21" << endl;
	}
	cout << r << endl;
	system ("Pause");
	return 0;
}