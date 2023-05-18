#include <iostream>
using namespace std;
int main()
{
int a = 6, b = 8;
int *p = &a, *q = &b, **r = &p;
*p = *q;
**r = 10;
cout << a << ", " << b << ", " << *p << ", " << *q << ", " << **r << endl;
*q = 12;
*p = **r;
cout << a << ", " << b << ", " << *p << ", " << *q << ", " << **r << endl;
system ("Pause");
return 0;
}