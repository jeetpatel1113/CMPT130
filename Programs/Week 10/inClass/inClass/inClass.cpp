#include <iostream>
#include <ctime>
using namespace std;
void populateArray(float *p, const int s)
{
	for (int i = 0 ; i < s ; i++)
		p[i] = (1.0 * rand()) / RAND_MAX;
	return;
}
void printArray (const float *p, const int s)
{
	for (int i = 0 ; i < s ; i++)
		cout << p[i] << "\t";
	cout << endl;
	return;
}
void computeMinMax (const float *p , const int s, float &min, float &max)
{
	min = p[0];
	max = p[0];
	for (int i = 1 ; i < s ; i++)
	{
		if (p[i] < min)
			min = p[i];
		if (p[i] > max)
			max = p[i];
	}
	return;
}
int main()
{
	int size;
	do
	{
		cout << "Enter positive number array size ";
		cin >> size;
	} while (size <= 0);
	
	float *A = new float[size];
	srand(time(0));

	populateArray(A, size);
	printArray(A, size);
	float min, max;
	computeMinMax(A, size, min, max);
	cout << "Minimum = " << min << " and maximum = " << max << endl;
	delete[] A;
	system ("Pause");
	return 0;
}