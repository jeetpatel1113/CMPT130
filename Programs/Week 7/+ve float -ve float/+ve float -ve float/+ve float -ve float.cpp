#include <iostream>
#include <ctime>
using namespace std;
bool nve(float a)
{
	//Pre-condition: take float a as input
	//Post-condition: return true if it is -ve.
	if (a<0)
		return true;
	return false;
}
bool pve(float a)
{
	//Pre-condition: take float a as input
	//Post-condition: return true if it is +ve
	if (a>0)
		return true;
	return false;
}
int main()
{
	srand(time(0));
	float A[10];
	int pv=0 , nv=0;
	for (int i=0 ; i<10 ; i++)
	{
		A[i] = (static_cast<float>(rand())/RAND_MAX)*2 + (-1);
		cout << A[i] << endl;
		if (pve(A[i]))
			pv++;
		else if (nve(A[i]))
			nv++;
	}
	cout << "The number of +ve are: " << pv << endl << "The number of -ve are: " << nv << endl << RAND_MAX;
	system("Pause");
	return 0;
}