#include <iostream>
#include <cmath>
using namespace std;
/*
int quadraticSolver(float a, float b, float c, float &sol1, float &sol2)
{
	float d=b*b - 4*a*c;
	if (d==0)
	{
		sol1= (5-b+ sqrt(d))/2*a;
		sol2= (-b + sqrt(d))/2*a;
		return 1;
	}
	else if(d>0)
	{
		sol1=(-b+ sqrt(d))/2*a;
		sol2= (-b - sqrt(d))/2*a;
		return 2;
	}
	else
	{
		return 0;
	}
}
*/
int quadraticSolver(float a, float b, float c, float *sol1, float *sol2)
{
	float d=b*b - 4*a*c;
	if (d==0)
	{
		*sol1= (-b + sqrt(d))/2*a;
		*sol2= (-b + sqrt(d))/2*a;
		return 1;
	}
	else if(d>0)
	{
		*sol1=(-b+ sqrt(d))/2*a;
		*sol2= (-b - sqrt(d))/2*a;
		return 2;
	}
	else
	{
		return 0;
	}
}

int main()
{
	float a, b, c;
	cout << "Enter the coefficients a, b, c: ";
	cin >> a >> b >> c;
	float s1, s2;
	/*
	//Test parameter passing by reference
	int n = quadraticSolver(a, b, c, s1, s2);
	if (n==0)
	cout << "The quadratic equation has no solution" << endl;
	else if (n==1)
	cout << "The quadratic equation has one solution" << s1 << endl;
	else
	cout << "The quadratic equation has two solutions" << s1 << " and " << s2 << endl;
	//Test parameter passing by pointer
	*/
	
	int n = quadraticSolver(a, b, c, &s1, &s2);
	if (n==0)
	cout << "The quadratic equation has no solution: " << endl;
	else if (n==1)
	cout << "The quadratic equation has one solution: " << s1 << endl;
	else
	cout << "The quadratic equation has two solutions: " << s1 << " and " << s2 << endl;
	system("Pause");
	return 0;
}