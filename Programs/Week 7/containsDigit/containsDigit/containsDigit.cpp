#include <iostream>
using namespace std;
bool isDigit(char a)
{
	if (a>='0' && a<='9')
		return true;
	return false;
}
bool containsDigit(const char A[], const int size)
{
	for (int i=0 ; i<size ; i++)
		if (isDigit(A[i]))
			return true;
	return false;
}
int main()
{
	const int s=5;
	char A[s]={'a','s','d','f','7'};
	cout << containsDigit(A,s);
	system ("Pause");
	return 0;
}