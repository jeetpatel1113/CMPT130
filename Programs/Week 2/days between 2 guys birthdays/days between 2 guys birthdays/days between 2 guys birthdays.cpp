#include <iostream>
using namespace std;
int main()
{
	cout << "Today we are gonna calculate days between 2 people's birth days" << endl;
	cout << "Let's go" << endl;
	system ("Pause");
	int d1, m1, y1, d2, m2, y2, a, b, c;
	cout << "Please enter following information for first guy: " << endl << "Day: ";
	cin >> d1;
	cout << "Month: ";
	cin >> m1;
	cout << "Year: ";
	cin >> y1;
	cout << "Please enter following information for second guy: " << endl << "Day: ";
	cin >> d2;
	cout << "Month: ";
	cin >> m2;
	cout << "Year: ";
	cin >> y2;
	/*
	a = d2 - d1;
	b = m2 - m1;
	c = y2 - y1;
	*/
	if (d1 < 0 || m1 < 0 || y1 < 0 || d1 < 0 || m2 < 0 || y2 < 0)
	{
		cout << "Please enter a valid input." << endl;
	}
	else
	{
	cout << "There are " /* << ((a*1)+(b*30)+(c*360)) */ << "days between " << d1 << " days /" << m1 << " months/" << y1 << " years and " << d2 << " days/" << m2 << " months/" << y2 << " years." << endl;
	}
	system("Pause");
	return 0;

}