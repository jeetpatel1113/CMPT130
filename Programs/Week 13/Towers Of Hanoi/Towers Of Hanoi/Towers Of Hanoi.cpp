#include <iostream>
using namespace std;
void move(const int& n, const char& A, const char& C, const char& B)
{
	if (n==1)
		cout << "Move top disc from " << A << " to " << C << endl;
	else
	{
		move(n-1 , A , B , C);
		move(1 , A , C , B);
		move(n-1 , B , C , A);
	}
}
int main()
{
	move(7, 'A' , 'C' , 'B');
	system ("Pause");
	return 0;
}