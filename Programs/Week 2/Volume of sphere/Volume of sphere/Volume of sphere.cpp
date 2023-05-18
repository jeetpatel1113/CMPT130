#include <iostream>
using namespace std;
int main()
{
	double vol, rad;
	cout << "Whats up guys!" << endl << endl;
	system ("Pause");
	cout << "Let's calculate #Volume of Sphere in this program, YAAAY!!!" << endl;
	cout << "Please enter radius: ";
	cin >> rad;
	vol= (static_cast<float>(4)/3)*3.14*rad*rad*rad;
	cout << "Cool!!! we got your required radius" << endl;
	cout << "Thank you for the input. Your answer will be right here once you click Enter key." << endl;
	system("Pause");
	cout << "According to radius provided which is " << rad << ", the given volume will be: " << vol << endl;
	cout << "Thank you for participating in this program. ☺" << endl;
	
	system("pause");
	return 0;
}