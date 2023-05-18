#include <iostream>
using namespace std;
char *getUpperAlphabets(char *A)
{
	char *B=new char[stringlength(A)];
	int count=0;
	for(int i=0 ; i<stringlength(A) ; i++)
	{
		if (A[i]<'Z' && A[i]>'A')
			B[count++]=A[i];
	}
	B[count]='\0';
	return B;
}
int stringlength(char cst[])
{
	int index=0;
	while (cst[index]!='\0')
		index++;
	return index;
}

int main()
{
    char A[] = "Fraser International College CMPT 120";
    cout << A << endl;
    char *B = getUpperAlphabets(A); //Output: FICCMPT
    cout << B << endl;
    delete[ ] B;
    system("Pause");
    return 0;
}