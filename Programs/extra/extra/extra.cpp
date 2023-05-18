#include<iostream>
using namespace std;
void printArray(const int arr[], const int bit_pattern_length)
{
	for (int i = 0; i < bit_pattern_length; i++)
		cout << arr[i];
}
void rotateArray(int A[], int size)
{
	//Pre-condition: Takes Array and size, reverse it completely.
	for (int i=0 ; i<size/2 ; i++)
	{
		for (int j=(size-i-1) ; j>=0 ; j--)
		{
			int temp= A[i];
			A[i]=A[j];
			A[j]=temp;
			cout << A[i] << " " << A[j] << endl;
			break;
		}
	}
	return;
}
int main()
{
	/*
	int A[8]={1,2,3,4,5,6,7,8};
	rotateArray(A, 8);
	printArray(A, 8);
	system ("Pause");
	return 0;
	/*
	int a=5, b=7;
	cout << ++a << ", " << b++ << endl;
	cout << a-- << ", " << ++b << endl;
	cout << ++a << ", " << --b << endl;
	cout << a-- << ", " << b++ << endl;
	cout << ++a + b++ << endl;
	cout << a-- + ++b << endl;
	int c = a++ + ++b;
	cout << c << endl;
	c= a-- - --b;
	cout << c << endl;
	c= c++ - ++a + --b;
	cout << c << endl;
	int c= static_cast<float>( a) / b;
	cout << c;
	*/
	/*
	char ch1 = 'A';
	char ch2 = 'Z';
	int sth = ch2 - 3;
	cout << sth << endl;
	cout << ++ch1 << endl;
	system("Pause");
	return 0;
	*/
	/*
	const int size=8;
	int A[size];
	int a;
	cout << "Please enter a number: ";
	cin >> a;
	char x = static_cast<char>(a);
	int t = static_cast<int>(x);
	for (int i=0 ; i<size ; i++)
	{
		A[i]= t%2;
		t=t/2;
	}
	for (int i=0 ; i<size ; i++)
		cout << A[i] << endl;
	system ("Pause");
	return 0;
	*/
	int A[4] = {1, 2, 3, 4};
	int B[4] = {2, 3, 4, 5};
	for (int i=0 ; i<4 ; i++)
		cout << A[i] + B[i];
	int C[4];
	
	for (int i=0 ; i<4 ; i++)
		cout << C[i];
	system ("Pause");
	return 0;
}