#include <iostream>
using namespace std;
int countElements(const int A[], const int size, int value)
{
	int count=0;
	for (int i=0 ; i<size ; i++)
	{
		if(A[i]==value)
			count++;
	}
	return count;
}
int countCommonElements(const int A1[], const int size1 , const int A2[] , const int size2)
{
	int count=0;
	for (int i=0 ; i<size1; i++)
	{
		if(countElements(A2, size2, A1[i])>0)
			count++;
	}
	return count;
}
int main()
{

	system ("Pause");
	return 0;
}