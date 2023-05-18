#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	int A[10], ev=0, od=0;
	for (int i=0 ; i<10 ; i++)
	{
		A[i]= rand();
		cout << A[i] << endl;
		if (A[i]%2==0)
			ev++;
		else
			od++;
	}
	cout << od << endl << ev << endl;
	system ("Pause");
	return 0;
}