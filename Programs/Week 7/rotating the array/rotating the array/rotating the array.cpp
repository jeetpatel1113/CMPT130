#include <iostream>
using namespace std;
void rotatingthearray(float A[] , const int size)
{
	int temp=A[0];
	for (int i=0 ; i<size-1 ; i++)
	{
		A[i]=A[i+1];
	}
	A[size-1]=temp;
	return;
}

int main()
{
	const int s=5;
	float A[s]={5, 7, 1, 9, 0};
	rotatingthearray(A, s);
	for (int i=0 ; i<s ; i++)
		cout << A[i];
	system("Pause");
	return 0;
}