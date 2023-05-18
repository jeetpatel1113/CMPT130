#include <iostream>
using namespace std;
int main()
{
	int mark;
	cout << "Enter the mark of the student in the range [0,100] ";
	cin >> mark;
	if (mark < 0 || mark > 100)
		cout << "Bad input. No letter grade. Bye." << endl;
	else if (/*mark >= 0 && */mark < 50)
		cout << "Letter grade is F" << endl;
	else if (/*mark >= 50 && */mark < 65)
		cout << "Letter grade is D" << endl;
	else if (/*mark >=65 && */mark <75)
		cout << "Letter grade is C" << endl;
	else if (/*mark >= 75 && */mark < 90)
		cout << "Letter grade is B" << endl;
	else
		cout << "Letter grade is A" << endl;

	system ("Pause");
	return 0;
}