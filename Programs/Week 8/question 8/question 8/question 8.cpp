#include <iostream>
using namespace std;
int main()
{
	int *a = new int(7);//assume the heap memory has address 4F
	int *p;
	p = a;
	cout << a << endl;
	cout << p << endl;
	cout << *a << endl;
	cout << *p << endl;
	*p = 10;
	cout << *a << endl;
	delete p;
//	delete a; // a doesnt exist as the heap memory was deleted.
	cout << 1 << endl;
	system ("Pause");
	return 0;
}
