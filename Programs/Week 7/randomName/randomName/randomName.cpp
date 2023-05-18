#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
char randupperchar()
{
	return static_cast<char>(rand()%(90-65+1)+65);
}
char randlowerchar()
{
	return static_cast<char>(rand()%(122-97+1)+97);
}

string randomName()
{
	string U="" ; 
	U+=randupperchar();
	string A=static_cast<string>(U);
	for (int i=0 ; i<10 ; i++)
		U+=randlowerchar();
	return U;
}

int main()
{
	srand(time(0));
	cout << randomName() << endl;
	system ("Pause");
	return 0;
}