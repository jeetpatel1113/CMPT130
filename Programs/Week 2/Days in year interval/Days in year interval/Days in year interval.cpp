#include <iostream>
using namespace std;
int main()
{
	cout << "We are going to find out number of days in year of interval" << endl;
	cout << "Let's get going...." << endl;
	system ("Pause");
	int in, fi, r;
	cout << "Please enter initial year: ";
	cin >> in;
	cout << "Please enter final year: ";
	cin >> fi;
	r = fi - in;
	cout << "There are " << (r*360) << " days between year " << in << " and year " << fi << endl;
	system ("Pause");
	return 0;

}