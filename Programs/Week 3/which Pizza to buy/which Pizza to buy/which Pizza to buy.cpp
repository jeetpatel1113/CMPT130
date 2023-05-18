# include <iostream>
using namespace std;
int main()
{
	float size_smaller, size_larger, price_smaller, price_larger;
	cout << "Please enter size and price of the smaller pizza in inch :" << endl;
	cin >> size_smaller >> price_smaller;
	cout << "Please enter size and price of the larger pizza in inch :" << endl;
	cin >> size_larger >> price_larger;
	float area_smaller, area_larger;
	area_smaller = 3.14 * size_smaller * size_smaller;
	area_larger = 3.14 * size_larger * size_larger;
	if (price_smaller/area_smaller < price_larger/area_smaller )
	{
		cout << "Smaller Pizza is better than Larger Pizza." << endl;
	}
	else if (price_smaller/area_smaller > price_larger/area_smaller )
	{
		cout << "Larger Pizza is better than Smaller Pizza." << endl;
	}
	system ("Pause");
	return 0;
}