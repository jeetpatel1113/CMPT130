#include <iostream>
using namespace std;
int successiveSum(int a)
{
	// Pre-condition:- n is integer value greater than 1
	// Post-condition:- return the sum of all numbers start to 1 till n
	int sum=0;
	for (int i=1 ; i<=a ; i++)
		sum+=i;
	return sum;
}
int main()
{
	int n;
	cout << "Please enter a positive number n: ";
	cin >> n;
	cout << successiveSum(n) << endl;
	system ("Pause");
	return 0;
}