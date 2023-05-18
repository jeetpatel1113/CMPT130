#include <iostream>
#include <string>
using namespace std;
bool isFound(string A, char a)
{
	for (int i=0 ; i<A.length() ; i++)
		if (A[i]==a)
			return true;
	return false;
}
int main()
{
	string A="whrweohwihe";
	cout << isFound(A,'e');
	system("Pause");
	return 0;
}