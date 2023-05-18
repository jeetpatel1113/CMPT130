#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	srand(time(0));
	// a = -1, b = 1, rand() % (b-a+1) +a
	int x = (rand()%(1 - -1 + 1)) + -1;
	if ( x == 0)
	{
		cout << "Yes" << endl;
	}
	else if ( x == 1 )
	{
		cout << "No" << endl;
	}
	else if ( x == -1 )
	{
		cout << "Not Sure" << endl;
	}
	system ("Pause");
	return 0;
}