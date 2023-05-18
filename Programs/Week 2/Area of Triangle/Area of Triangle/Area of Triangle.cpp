#include <iostream>
using namespace std;
int main()
{
	cout << "Hi, " << endl << "Hope you are doing great...." << endl << "Today, we are going to find area of triangle" << endl << "So, lets get started." << endl;
	cout << "So, we need base and height of triangle to find its area. " << endl << "Please enter those in following as per asked: " << endl;
	
	float base, height, area;
	cout << "Enter Base: ";
	cin >> base;
	cout << "Enter Height: ";
	cin >> height;
	cout << "Thank you for the input and now we will process, this is a bit slow pc so please wait for a while......" << endl << "processing......" << endl << "processing....." << endl << "processing....." << endl;
	cout << "YAAAAY!!! We finally got the answer.... huhhhh was tough, phew" << endl << "Anyways, Thanks for waiting, here's your answer. " << endl << endl;
	
	area= base * height / 2;
	cout << "The area of Triangle with base " << base << " and height " << height << " is " << area << endl;
	system("Pause");
	return 0;
}