#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
bool allEven(int x)
{
	int cou=0;
	for (int i=1 ; i<=x ; i++)
	{
		int r = rand()%(100-2+1)+2;
		cout << r << endl;
		if (r%2==0)
			cou++;
	}
	if (cou==0)
		return false;
	else
		return true;	
}
int main()
{
	srand(time(0));
	int n;
	do
	{
		cout << "Please enter a positive value: ";
		cin >> n;
	} while (n<0);

	cout << allEven(n);
	system ("Pause");
	return 0;
}