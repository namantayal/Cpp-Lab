#include<iostream>
#include<math.h>
using namespace std;

void roots();

void my_sqrt()
{
	cout<<"\nD is negative, Roots can't be computed!!";
	cout<<"\nTry Again";
	roots();
}

void roots()
{
	int a,b,c,d;
	float r1,r2;
	cout<<"\nEnter a - ";
	cin>>a;
	cout<<"\nEnter b - ";
	cin>>b;
	cout<<"\nEnter c - ";
	cin>>c;
	set_terminate(my_sqrt);
	d=(b*b)-(4*a*c);
	if(d<0)
		throw;
	else
	{
		r1=(-b-sqrt(d))/(2*a);
		r2=(-b+sqrt(d))/(2*a);
		cout<<"\nRoot 1 - "<<r1;
		cout<<"\nRoot 2 - "<<r2;
	}
}

int main()
{
	roots();
	return 0;
}