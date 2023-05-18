# include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, e, cpv=0, cnv=0, ctot=0;
	float sumpv=0, sumnv=0, avgpv, avgnv, tot, avgtot;
	cout << " Please enter 5 integers for a, b, c, d, e : " << endl;
	cin >> a >> b >> c >> d >> e;
	if (a<0)
	{
		sumnv += a;
		cnv += 1;
		ctot += 1;
	}
	else if ( a>0 )
	{
		sumpv += a;
		cpv += 1;
		ctot += 1;
	}
	else
	{
		ctot += 1;
	}
	if ( b<0)
	{
		sumnv += b;
		cnv += 1;
		ctot += 1;
	}
	else if ( b>0 )
	{
		sumpv += b;
		cpv += 1;
		ctot += 1;
	}
	else
	{
		ctot += 1;
	}
	if (c<0)
	{
		sumnv += c;
		cnv += 1;
		ctot += 1;
	}
	else if ( c>0 )
	{
		sumpv += c;
		cpv += 1;
		ctot += 1;
	}
	else
	{
		ctot += 1;
	}
	if (d<0)
	{
		sumnv += d;
		cnv += 1;
		ctot += 1;
	}
	else if ( d>0 )
	{
		sumpv += d;
		cpv += 1;
		ctot += 1;
	}
	else
	{
		ctot += 1;
	}
	if (e<0)
	{
		sumnv += e;
		cnv += 1;
		ctot += 1;
	}
	else if ( e>0 )
	{
		sumpv += e;
		cpv += 1;
		ctot += 1;
	}
	else
	{
		ctot += 1;
	}
	avgpv = 1.0*sumpv/cpv;
	avgnv = 1.0*sumnv/cnv;
	tot = sumpv + sumnv;
	avgtot = 1.0*tot/ctot;
	cout << "The sum of only the positive inputs is : " << sumpv << endl;
	cout << "The average of only the positive inputs is : " << avgpv << endl;
	cout << "The sum of only the negative inputs is : " << sumnv << endl;
	cout << "The average of only the negative inputs is : " << avgnv << endl;
	cout << "the sum of all the inputs is : " << tot << endl;
	cout << "and  the average of all the inputs is : " << avgtot << endl;
	system ("Pause");
	return 0;

}