#include <iostream>
using namespace std;
int stringlength(const char c[])
{
	int i=0;
	while(c[i]!='\0')
		i++;
	return i;
}
bool isPalindrome(const char *A)
{
	for (int i=0, j=stringlength(A)-1 ; i!=j; i++, j--)
	{
		if (A[i]!=A[j])
			return false;
	}
	return true;
}
int main()
{
	char A[] = "RACECAR";
	char B[] = "NAMAN";
	if (isPalindrome(A))
		cout << A << " is Palindrome." << endl;
	else
		cout << A << " is not Palindrome." << endl;
	if (isPalindrome(B))
		cout << B << " is Palindrome." << endl;
	else
		cout << B << " is not Palindrome." << endl;
	system("Pause");
	return 0;
}