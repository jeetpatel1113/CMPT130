#include <iostream>
using namespace std;
bool containEven(const int A[], const int size)
{
	//Pre-condition: array as input and its size
	//Post-condition: return if the array contains even number
	for (int i=0 ; i<size ; i++)
		if (A[i]%2==0)
			return true;
	return false;
}