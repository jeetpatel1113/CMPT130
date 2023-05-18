#include <iostream>
using namespace std;
int main()
{
	int a, b, cou=0;
	cout << "Enter a and b: " << endl;
	cin >> a >> b;
	if (a>b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	do{
		cout << ++a << endl;
	}while(a<b-1);
	if (cou==0)
		cout << "There is no any integer" << endl;
	system("Pause");
	return 0;
}