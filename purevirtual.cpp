#include<iostream>
using namespace std;

class Shape
{
	protected:
		int side1, side2;

	public:
		Shape(int a, int b)
		{
			side1=a;
			side2=b;
		}
		virtual void area(int x)=0;
};

class Recatngle:public Shape
{
public:
	Recatngle(int a1=0,int b1=0):Shape(a1,b1)
	{

	}
	void area(int x)
	{
		cout<<"Enter the base and height of triangle: ";
		cin>>side1>>side2;
		cout<<"Area - "<<0.5*side1*side2<<endl;
	}
};

int main()
{
	Shape *shape;
	Recatngle rect;
	shape=&rect;
	shape->area(2);
	return 0;
}
