#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int vowelCounter(const int A[], const int x)
{
	int count=0;
	for (int i=0 ; i<x ; i++)
	{
		if (A[i]=='a' || A[i]=='e' || A[i]== 'i' || A[i]== 'o' || A[i]== 'u' || A[i]== 'A' || A[i]== 'E' || A[i]== 'I' || A[i]== 'O' || A[i]== 'U')
		count++;
	}
	return count;
}
int main()
{
	int a;
	cout << "Please enter size of the Array: ";
	cin >> a;
	char r;
	int A1[1000];
	for (int i=0 ; i<a ; i++)
	{
		cout << "Please enter a value: " << endl;
		cin >> r;
		A1[i]=r;
	}
	cout << vowelCounter(A1,a);
	system ("Pause");
	return 0;
}