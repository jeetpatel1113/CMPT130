#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	int x = 1, y= 10, temp;
	//cout << "Please enter 2 integers to get one random between them : " << endl;
	//cin >> x >> y;
	if ( x>=y )
	{
		temp = x;
		y = x;
		temp = y;
	}
	cout << x << endl << y << endl;
	int r = rand()%(y-x+1) +x;
	cout << r << endl;
	system ("Pause");
	return 0;
}