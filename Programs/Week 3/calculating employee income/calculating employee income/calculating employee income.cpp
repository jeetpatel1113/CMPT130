# include <iostream>
using namespace std;
int main()
{
	float h, d, mon, tot;
	cout << "Enter hours and dependant: " ;
	cin >> h, d;
	if (h>40)
	{
		mon = 16.78*40 + 1.5*16.78*(h-40);
	}
	else if (h<=40)
	{
		mon = 16.78*h;
	}
	tot = mon - ( (mon*6/100.0) + (mon*14/100.0) + (mon*6/100.0) + 10 );


	if (d > 3)
	{
		tot+=35;
	}
	system ("Pause");
	return 0;

	/*4. An employee is paid at a rate of $16.78 per hour for the first 40 hours worked in a week. 
Any hours over that are paid at the overtime rate of one and-one-half times that. From the 
worker�s gross pay, 6% is withheld for Social Security tax, 14% is withheld for federal 
income tax, 5% is withheld for state income tax, and $10 per week is withheld for union 
dues. If the worker has three or more dependents, then an additional $35 is withheld to 
cover the extra cost of health insurance beyond what the employer pays. Write a program 
that will read in the number of hours worked in a week and the number of dependents as 
input and will then output the worker�s gross pay, each withholding amount, and the net 
take-home pay for the week.*/

}