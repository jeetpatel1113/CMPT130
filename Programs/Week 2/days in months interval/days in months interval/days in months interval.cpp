#include <iostream>
using namespace std;
int main()
{
	cout << "This program is to measure days between the given interval of months." << endl;
	cout << "Here we go....." << endl;
	system("Pause");
	int in, fi, r;
	cout << "Please enter initial month: ";
	cin >> in;
	cout << "Please enter final month: ";
	cin >> fi;
	r = fi - in;
	cout << "There are " << (r*30) << " days between month " << in << " and month " << fi << endl;
	system ("Pause");
	return 0;
}