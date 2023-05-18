#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	float a = -1.0, b = 1.0;
	float x = rand();
	float r = (( 1.0 * x / RAND_MAX) * ( b - a ) + a);
	cout << x << endl;
	cout << r << endl;
	// cout << RAND_MAX << endl;
	system("Pause");
	return 0;
}