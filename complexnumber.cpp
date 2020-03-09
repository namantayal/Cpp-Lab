#include<iostream>
using namespace std;

class Complex
{
	float real;
	float imag;
	~Complex()
	{
		cout<<"\nDestroying";
	}
	public:
	void getNum()
	{
		cout<<"\nEnter Real Part - ";
		cin>>real;
		cout<<"\nEnter Imaginary Part - ";
		cin>>imag;
	}
	Complex* add(const Complex *temp)
	{
		Complex *p=new Complex();
		p->real=this->real + temp->real;
		p->imag=this->imag + temp->imag;
		return p;
	}
	Complex* subtract(const Complex *temp)
	{
		Complex *p=new Complex();
		p->real=this->real - temp->real;
		p->imag=this->imag - temp->imag;
		return p;
	}
	Complex* multi(const Complex *temp) const
	{
		Complex *p=new Complex();
		p->real=(this->real * temp->real)-(this->imag * temp->imag);
		p->imag=(this->real * temp->imag)+(this->imag * temp->real);
		return p;
	}
	Complex* devide(const Complex *temp)
	{
		Complex *p=new Complex();
		p->real=temp->real;
		p->imag=-temp->imag;
		Complex *num=this->multi(p);
		Complex *denom=temp->multi(p); // Call to member funcn of const object
		num->real=num->real/denom->real;
		num->imag=num->imag/denom->real;
		denom->destroy();
		return num;
	}

	void display()
	{
		cout<<"\nReal - "<<real;
		cout<<"\nImaginary - "<<imag<<"i";
	}
	void destroy()
	{
		delete this;
	}
};

int main()
{
	Complex *c1=new Complex();
	Complex *c2=new Complex();
	c1->getNum();
	c2->getNum();
	Complex *add=c1->add(c2);
	Complex *sub=c1->subtract(c2);
	Complex *mult=c1->multi(c2);
	Complex *div=c1->devide(c2);
	cout<<"\n\nAddition - ";
	add->display();
	cout<<"\n\nSubtraction - ";
	sub->display();
	cout<<"\n\nMultiplication - ";
	mult->display();
	cout<<"\n\nDivision - ";
	div->display();
	add->destroy();
	sub->destroy();
	mult->destroy();
	div->destroy();
	c1->destroy();
	c2->destroy();
	return 0;
}