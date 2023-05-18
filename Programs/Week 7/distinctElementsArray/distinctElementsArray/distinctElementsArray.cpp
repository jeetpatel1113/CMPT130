#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void distinctElementsArray(const int A[] , const int size)
{
	int count=0;
	for (int i=0 ; i<size ; i++)
	{
		for (int j=0 ; j<size ; j++)
			if(A[i]==A[j])
				count++;
		cout << count;
	}
	if (count==size)
		cout << 1;
	else
		cout << 0;
	return;
}

int main()
{
	srand(time(0));
	const int siz=4;
	int A[4];
	for (int i=0 ; i<siz ; i++)
	{
		A[i]=rand()%(20-2)+2;
		cout << A[i] << endl;
	}
	distinctElementsArray(A,siz); 
	cout << endl;
	system ("Pause");
	return 0;
}