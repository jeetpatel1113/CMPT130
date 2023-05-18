#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
void doubleArrayElements(float X[] , int size)
{
	for (int i=0 ; i<size ; i++)
		X[i] = 2*X[i];
	return;
}
*/
/*
int countEven (const int arr[], int size)
{
	int count = 0;
	for (int i = 0; i<size ; i++)
	{
		if (arr[i] == 2*(arr[i]/2))
			count++;
	}
	return count;
}
*/


int main()
{
	/*
	srand(time(0));
	int A[10];
	*/
	/*	
	for (int i=0 ; i<10 ; i++)
		A[i] = rand()%21 + 5;
	for (int i=0 ; i<10 ; i++)
		cout << "Element at index " << i << " = " <<  A[i] << endl;
	int s=0;
	for (int i=0 ; i<10 ; i++)
		s+=A[i];
	cout << "The sum of all the elements of the array is " << s << endl;
	*/
	/*
	int e=0 , o=0;
	for (int i=0 ; i<10 ; i++)
		A[i]%2 == 0 ? e++ : o++;
	cout << "The array has " << e << " even and " << o << " odd elements" << endl;
	for (int i=0 ; i<10 ; i++)
	{
		cout << "Enter a value for the element at index " << i << ": ";
		cin >> A[i];
	}

	for (int i=0 ; i<10 ; i++)
		cout << "Element at index " << i << " = " << A[i] << endl;
	int minimum = A[0];
	for (int i=1 ; i<10 ; i++)
		if (A[i] < minimum)
			minimum = A[i];
	cout << "The minimum element is " << minimum << endl;
	*/
	/*
	float A[5] = {0.1 , 0.2 , 0.3 , 0.4 , 0.5};
	
	cout << "Originally the elements of the array are" << endl;
	for (int i=0 ; i<5 ; i++)
		cout << A[i] << "   ";
	cout << endl;
	doubleArrayElements(A , 5);

	cout << "After the function call the elements of the array are" << endl;
	for (int i=0 ; i<5 ; i++)
		cout << A[i] << "   ";
	cout << endl;
	*/
	/*
	int A[] = {1, 2, 3, 4, 5};
	cout << "Originally the elements of the array are" << endl;
	for (int i=0 ; i<5 ; i++)
		cout << A[i] << endl;
	int m = countEven(A, 5);
	cout << "There are " << m << " even numbers in the array. " << endl;
	cout << "After the function call, the elements of the array are" << endl;
	for (int i=0 ; i<5 ; i++)
		cout << A[i] << endl;
	*/
	double A[] = {1,2,3};
	A[3] = 6;
	cout << A[2] << A[3] << endl;
	system ("Pause");
	return 0;
}