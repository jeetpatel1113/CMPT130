#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
void computeMinMax(const int* p, const int size, int *min, int &max)
{
	*min=p[0];
	max=p[0];
	for (int i=0 ; i<size ; i++)
	{
		if (abs(p[i]) < abs(*min))
			*min = p[i];
		if (abs(p[i]) > abs(max))
			max = p[i];
	}
	return;
}
void computeMinMax(const int* p, const int size, int &min, int &max)
{
	min=p[0];
	max=p[0];
	for (int i=0 ; i<size ; i++)
	{
		if (abs(p[i]) < abs(min))
			min = p[i];
		if (abs(p[i]) > abs(max))
			max = p[i];
	}
	return;
}
int main()
{
    //Seed the random number generator
    srand(time(0));

    //Create a static array
    const int SIZE = 10 + rand() % 20;
    int *A = new int[SIZE];

    //Populate the array
    for (int i = 0; i < SIZE; i++)
        A[i] = rand() % 51 - 25;

    //Print the elements of the array
    cout << "The elements of the array are: ";
    for (int i = 0; i < SIZE; i++)
        cout << A[i] << "   ";
    cout << endl;

    //Compute and print the minimum and maximum in absolute value elements of the array
    int minimum, maximum;
    computeMinMax(A, SIZE, &minimum, maximum);
    cout << "The element of the array whose absolute value is the minimum is " << minimum << endl;
    cout << "The element of the array whose absolute value is the maximum is " << maximum << endl;

    //Compute and print the minimum and maximum in absolute value elements of the array
    computeMinMax(A, SIZE, minimum, maximum);
    cout << "The element of the array whose absolute value is the minimum is " << minimum << endl;
    cout << "The element of the array whose absolute value is the maximum is " << maximum << endl;

    delete[] A;

    system("Pause");
    return 0;
}