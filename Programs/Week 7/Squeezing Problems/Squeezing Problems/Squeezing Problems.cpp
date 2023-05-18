#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int sumofelements(const int A[], const int size)
{
	//Pre-condition: Take input array and size of that Array as constant
	//Post-condition: returning the sum of the elements of those array
	int sum=0;
	for (int i=0 ; i<size ; i++)
		sum+=A[i];
	return sum;
}
int sumofabselements(const int A[], const int size)
{
	int sum=0;
	for (int i=0 ; i<size ; i++)
		sum+=abs(A[i]);
	return sum;
}
int abssumofelements(const int A[], const int size)
{
	int sum=0;
	for (int i=0 ; i<size ; i++)
		sum+=A[i];
	return abs(sum);
}
int profofelements(const int A[],const int size)
{
	int prod=1;
	for (int i=0 ; i<size ; i++)
		prod*=A[i];
	return prod;
}
int prodofabselements(const int A[], const int size)
{
	int prod=1;
	for (int i=0 ; i<size ; i++)
		prod*=abs(A[i]);
	return prod;
}
int absprodofelements(const int A[], const int size)
{
	int prod=1;
	for (int i=0 ; i<size ; i++)
		prod*=A[i];
	return abs(prod);
}
int maxElement(const int A[], const int size)
{
	int max=A[0];
	for (int i=0 ; i<size ; i++)
		if(A[i]>max)
			max=A[i];
	return max;
}
int minElement(const int A[], const int size)
{
	int min=A[0];
	for (int i=0 ; i<size ; i++)
		if(A[i]<min)
			min=A[i];
	return min;
}


int main()
{
	srand(time(0));
	const int s=10;
	int A[s];
	for (int i=0 ; i<s ; i++)
	{
		A[i]=rand()%(10-(-10)+1)+-10;
		cout << A[i] << endl;
	}
	// input of elements
	//Q-12  cout << sumofelements(A,s) << endl;
	//Q-13  cout << sumofabselements(A,s) << endl;
	//Q-14  cout << abssumofelements(A,s) << endl;
	//Q-15  cout << profofelements(A,s) << endl;
	//Q-16  cout << prodofabselements(A,s) << endl;
	//Q-17  cout << absprodofelements(A,s) << endl;
	//Q-18,19,20 cout << maxElement(A,s) << endl; cout << minElement(A,s) << endl;

	system ("Pause");
	return 0;
}
