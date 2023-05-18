#include <iostream>
using namespace std;
int stringlength(const char c[])
{
	int i=0;
	while (c[i]!='\0')
		i++;
	return i;
}
bool isUpper(char a)
{
	if (a<'Z' && a>'A')
		return true;
	return false;
}
char *getUpperAlphabets(const char *A)
{
	char *X = new char[stringlength(A)];
	int k=0;
	for (int i=0 ; i<stringlength(A) ; i++)
	{
		if (isUpper(A[i]))
			X[k++]=A[i];
	}
	X[k]='\0';
	return X;
}
int main()
{
    char A[] = "Fraser International College CMPT 120";
    cout << A << endl;
    char *B = getUpperAlphabets(A); //Output: FICCMPT
    cout << B << endl;
    delete[ ] B;
	
    system("Pause");
    return 0;
}