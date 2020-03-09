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
		virtual void area()
		{
			cout<<"Enter the base and height of triangle: ";
			cin>>side1>>side2;
			cout<<"Area - "<<0.5*side1*side2<<endl;		
		}

		void demo()
		{
			cout<<"Base Demo() called"<<endl;
		}
};

class Recatngle:public Shape
{
public:
	Recatngle(int a1=0,int b1=0):Shape(a1,b1)
	{

	}
	void area()
	{
		cout<<"Enter the base and height of triangle: ";
		cin>>side1>>side2;
		cout<<"Area - "<<0.5*side1*side2<<endl;
	}
	void demo()
	{
		cout<<"Derived class demo() called"<<endl;
	}
	void demo1()
	{
		cout<<"Demo1 called"<<endl;
	}
};

int main()
{
	Shape *shape;
	Recatngle rect;
	shape=&rect;
	shape->area();
	shape->demo();
	shape->Shape::area();
	return 0;
}
