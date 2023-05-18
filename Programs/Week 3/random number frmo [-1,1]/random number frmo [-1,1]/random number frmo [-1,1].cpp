#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	int a = rand();
	a = a%3;
	a = a + -1;
	// r = rand();
	// r = count - 1 + a = ( b - a + 1 ) - 1 + a = b, so 
	cout << a << endl;
	system ("Pause");
	return 0;
}