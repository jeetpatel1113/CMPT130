#include <iostream>
using namespace std;
void printReverse(int num)
{
	while (true)
	{
		cout << num%10;
		num = num/10;
		if(num==0)
			return;
	}
}

int main()
{
	int n;
	cout << "Please enter a non-negative integer number: ";
	cin >> n;
	if (n<0)
		cout << "Please enter a correct integer." << endl;
	else
	{
		cout << "The digits of the number you entered in reverse order are ";
		printReverse(n);
		cout << endl;
	}
	system("Pause");
	return 0;
}