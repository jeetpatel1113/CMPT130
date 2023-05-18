#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	srand(time(0));
	int arraySize, sum=0, count=0;
	cout << "Please enter size of the array: ";
	cin >> arraySize;
	int *A = new int[arraySize];
	for (int i=0 ; i<arraySize ; i++)
		A[i]=rand()%(10 - -10) + -10;
	for (int i=0 ; i<arraySize ; i++)
	{
		cout << A[i] << "  ";
		sum+=A[i];
		count++;
	}
	cout << "The average of the numbers is: " << 1.0*sum/count << endl;
	delete [] A;
	system ("Pause");
	return 0;
}