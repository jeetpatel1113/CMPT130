#include <iostream>
using namespace std;
int successiveProduct(int a)
{
	// Pre-condition:- a is an integer greater than 1
	// Post-condition:- returns product of 1 till 
	int prod=1;
	for (int i=1 ; i<=a ; i++)
		prod*=i;
	return prod;
}
int main()
{
	int n;
	cout << "Please enter a positive number: ";
	cin >> n;
	cout << successiveProduct(n) << endl;
	system ("Pause");
	return 0;
}