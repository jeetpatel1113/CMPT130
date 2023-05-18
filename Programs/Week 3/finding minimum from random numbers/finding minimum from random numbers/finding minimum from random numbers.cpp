#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	int minimum;
	int r = rand() % 21 + -10;
	cout << r << endl;
	minimum = r;
	int k = 1;
	while ( k < n )
	{
		r = rand() % 21 + -10;
		cout << r << endl;
		if ( r < minimum )
		{
			minimum = r;
		}
		k++;
	}
}