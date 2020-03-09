#include<iostream>
using namespace std;

class matrix
{
	int n,m;
	int mat[10][10];
public:
	matrix(int x=0, int y=0)
	{
		n=x;
		m=y;
	}
	void getdata();
	matrix operator +(matrix);
	void display();
};

void matrix::getdata()
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>mat[i][j];
		}
	}
}

matrix matrix::operator +(matrix mat2)
{
	matrix temp(n,m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			temp.mat[i][j]=mat[i][j]+mat2.mat[i][j];
		}
	}		
	return temp;
}

void matrix::display()
{	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int main()
{
	int n,m;
	cout<<"\nEnter the rows - ";
	cin>>n;
	cout<<"Enter the coloumns - ";
	cin>>m;
	matrix a(n,m),b(n,m),c(n,m);
	cout<<"\nEnter first matrix - \n";
	a.getdata();
	cout<<"\nEnter second matrix - \n";
	b.getdata();
	c=a+b;
	cout<<"\nOutput - \n";
	c.display();
	return 0;
}