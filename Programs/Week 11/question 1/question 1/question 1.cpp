#include <iostream>
using namespace std;
int main()
{
	char ch = 'A';
	char *p = new char(ch);
	char *q;
	q = &ch;
	char r[] = {ch};
	cout << ch << endl;
	cout << p << endl;
	cout << q << endl;
	cout << r << endl;
	cout << /*static_cast <void *>*/(&ch) << endl;
	cout << &(p[0]) << endl;
	cout << &(q[0]) << endl;
	cout << &(r[0]) << endl;
	cout << &(*p) << endl;
	cout << &(*q) << endl;
	cout << &(*r) << endl;
	delete[] p;
	system("Pause");
	return 0;
}