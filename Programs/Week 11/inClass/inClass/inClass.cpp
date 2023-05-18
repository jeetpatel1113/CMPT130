#include <iostream>
#include <string>
using namespace std;
int stringLength(const char *A)
{
	int len=0;
	while (A[len] !='\0')
		len++;
	return len;
}

bool isFound(const char *A, const char x)
{
	for (int i = 0 ; i<stringLength(A) ; i++)
		if (A[i]==x)
			return true;
	return false;
}
char *foo(const char *C)
{
	int length = stringLength(C);
	char *ans = new char[length + 1];
	for (int i=0 , j=length-2 ; i<length ; i++, j--)
		ans[i] = C[j];
	ans[length] = '\0';
	return ans;
}
char *random_C_String()
{
	int len = rand()%10 + 3;
	char *c = new char [len+1];
	for (int i=0 ; i<len ; i++)
		c[i] = 97 + rand()%26;
	c[len] = '\0';
	return c;
}
int main()
{
	/*
	int x1[10];
	char x2[10];
	bool x3[10];
	float x4[10];
	double x5[10];

	for (int i=0 ; i < 10 ; i++)
	{
		x1[i] = 1 + i;
		x2[i] = 97 + i;
		x3[i] = i % 2 == 0 ? true : false;
		x4[i] = 1.0 + i;
		x5[i] = 2.0 + i;
	}

	cout << x1 << endl;
	cout << x2 << endl;
	cout << x3 << endl;
	cout << x4 << endl;
	cout << x5 << endl;
	*/

	/*
	char A[] = {'a', '6', '@', 'g', '\0', '1'};
	cout << A[5] << endl;
	

	char A[] = {'C' , 'M' , 'P' , 'T' , '1' , '2' , '0' , '\0' , 'h'};
	int index = 0;
	while (A[index]!=0)
	{
		cout << "The character at index " << index << " is " << A[index] << endl;
		index++;
	}
	cout << "The C-string A is " << A << endl;
	*/
	/*
	char A[] = "CMPT 130 FALL 2022";
	int len = stringLength(A);
	cout << "our C-string is " << A << endl;
	cout << "Its length is " << len << endl;
	char x;
	cout << "Enter a character ";
	cin >> x;
	bool flag = isFound(A,x);
	if (flag == true)
		cout << x << " is found in " << A << endl;
	else
		cout << x << " is not found in " << A << endl;
	*/
	/*
	char A[] = "CMPT 120";
	char *B = foo(A);
	cout << A << endl;
	cout << B << endl;

	cout << stringLength(A) << endl;
	cout << stringLength(B) << endl;
	delete[] B;

	*/
	/*
	string A;
	cout << "Please enter string: ";
	cin >> A;
	cout << A << endl;
	*/
	char A[] = " the quick brown fox jumps over the lazy do";
	cout << A << endl;
	/*
	int size;
	do
	{
		cout << "Enter a positive integer size of an array ";
		cin >> size;
	}while(size <= 0);

	char **arr = new char*[size];

	for (int i=0 ; i < size ; i++)
		arr[i] = random_C_String();
	cout << "The elements of the array are " << endl;
	for (int i=0 ; i < size ; i++)
		cout << arr[i] << endl;

	for (int i=0 ; i < size ; i++)
		delete[] arr[i];
	delete[] arr;
	*/
	system ("Pause");
	return 0;
}