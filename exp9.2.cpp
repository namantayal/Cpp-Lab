#include<iostream>
#include<math.h>
using namespace std;

void roots();

class sqrt_exception:public exception
{
	public:
	const char* what()
	{
		return "D is negative, Roots can't be computed!!\nTry Again";
	}
	void handle()
	{
		roots();
	}
};

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
	d=(b*b)-(4*a*c);
	try
	{	
		if(d<0)
			throw sqrt_exception();
		else
		{
			r1=(-b-sqrt(d))/(2*a);
			r2=(-b+sqrt(d))/(2*a);
			cout<<"\nRoot 1 - "<<r1;
			cout<<"\nRoot 2 - "<<r2;
		}
	}
	catch(sqrt_exception e)
	{
		cerr<<e.what();
		e.handle();
	}
}

int main()
{
	roots();
	return 0;
}