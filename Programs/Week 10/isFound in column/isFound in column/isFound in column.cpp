#include <iostream>
using namespace std;
bool isfound(int **M, const int x, const int row_index, const int col)
{
	for (int j=0 ; j<col ; j++)
	{
		cout << M[j][row_index] << endl;
		if (M[j][row_index]==x)
		{
			
			return true;
		}
	}
	return false;
}
int main()
{
	int **M = new int *[10];
	for (int i=0 ; i<10 ; i++)
		M[i] = new int [10];
	for (int i=0 ; i<10 ; i++)
	{
		for (int j=0 ; j<10 ; j++)
			M[i][j] = rand()%(9-1+1)+1;

	}

	for (int i=0 ; i<10 ; i++)
	{
		for (int j=0 ; j<10 ; j++)
			cout << M[i][j] << "  ";
		cout << endl;
	}
	int x = rand()%(9-1+1)+1;

	if(isfound(M,x,4,10))
		cout << x << " is found" << endl;
	else
		cout << x << " is NOT found" << endl;

	for (int i=0 ; i<10 ; i++)
		delete[] M[i];
	delete[]M;

	system("Pause");
	return 0;
}