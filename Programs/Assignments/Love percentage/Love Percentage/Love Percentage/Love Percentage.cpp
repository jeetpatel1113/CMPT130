#include <iostream>
#include <string>
#include <sstream>
using namespace std;
bool isFound(const char &b, const int &size, const char &a)
{
	for (int i = 0 ; i < size ; i++)
		if (b[i] == a)
			return true;
	return false;
}
int *nametoints(string x)
{
	int size;
	if (x.length()%2 == 0)
		size = x.length()/2; 
	else if (x.length()%2 == 1)
		size = x.length()/2 + 1;
	int *a = new int [size];
	char *b = new char [size];
	for (int i = 0 ; i < size ; i++)
	{
		if (
	}
	delete[] b;
	return a;
}
int main()
{
	stringstream ss;
	string player1, player2;
	cout << "Please enter your name: ";
	cin >> player1;
	cout << "Please enter your name: ";
	cin >> player2;
	ss << player1 << " loves " << player2;
	string x = ss.str();
	cout << x << endl;
	int *a = nametoints(x);
	for (int i = 0 ; i < 
	{

	}
	delete [] a;
	system ("Pause");
	return 0;
}