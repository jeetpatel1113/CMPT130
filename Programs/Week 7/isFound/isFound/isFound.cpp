#include <iostream>

using namespace std;
bool isFound(const int A[], const int size, const int integer)
{
	for (int i=0 ; i<size ; i++)
		if (A[i]==integer)
			return true;
	return false;
}

int main()
{
	const int s=7;
	int A[s]={1,2,3,4,5,6,7};
	cout << isFound(A,s,8) << endl;
	system ("Pause");
	return 0;
}