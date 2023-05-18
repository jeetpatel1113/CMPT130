#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int quadraticTester(float m, float n, float l)
{
	int d1 = (-n + sqrt(n*n-4*m*l))/2*m;
	int d2 = (-n - sqrt(n*n-4*m*l))/2*m;
	if (d1==d2)
		return 1;
	else
		return 2;
}
int main()
{
	srand(time(0));
	int a, b, c;
	cout << "Please enter a positive value: ";
	cin >> a >> b >> c;
	cout << quadraticTester(a, b, c) << endl;
	system ("Pause");
	return 0;
}