#include <iostream>
#include <cstdlib>
#include <ctime>
int countElementsFromIndex(const int A[],const int size,int searchValue,int startIndex)
{
	int count=0;
	for (int i=startIndex ; i<size ; i++)
		if (A[i]==searchValue)
			count++;
	return count;
}
using namespace std;
int main()
{
	const int size = 11;
	int A[]= {5, 7, 8, 0, 5, 4, 1, 5, 6, 9, 5};
	int searchValue = 5;
	int startIndex = 2;
	cout << countElementsFromIndex(A, size, searchValue, startIndex) << endl;
	system ("Pause");
	return 0;
}