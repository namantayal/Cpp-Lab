#include<iostream>
using namespace std;

int hashfunction(int key)
{
	int index=0;
	for(int i=0;i<3;i++)
	{
		index+=key%10;
		key/=10;
	}
	index=(index/10)+(index%10);
	index=(index/10)+(index%10);
	return index;
}

int main()
{
	int sap;
	cout<<"Enter SAP - ";
	cin>>sap;
	cout<<"\nIndex - "<<hashfunction(sap);
	return 0;
}