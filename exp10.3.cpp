#include<iostream>
using namespace std;

#define size 10

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

void search(int hash_table[])
{
	int sap,flag=0,index;
	cout<<"\nEnter Sap - ";
	cin>>sap;
	int x=hashfunction(sap);
	for(int i=0;i<size;i++)
	{
		index=(x+i)%size;
		if(hash_table[index]==sap)
		{
			cout<<"\nFound";
			flag=1;
			break;
		}
		else if(hash_table[index]==0)
		{
			break;
		}
	}
	if(flag==0)
		cout<<"\nNot Found";
}

void insert(int hash_table[])
{
	int sap,flag=0,index;
	cout<<"\nEnter Sap - ";
	cin>>sap;
	int x=hashfunction(sap);
	for(int i=0;i<size;i++)
	{
		index=(x+i)%10;
		if(hash_table[index]==0)
		{
			hash_table[index]=sap;
			cout<<"\nInsetred at index - "<<index;
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"\nElement cannot be inserted";
	}
}

int main()
{
	int hash_table[size],choice;
	for(int i=0;i<size;i++)
	{
		hash_table[i]=0;
	}
	while(1)
	{
		cout<<"\n1.)Add\n2.)Search\n3.)Exit\n";
		cin>>choice;
		switch(choice)
		{
			case 1: insert(hash_table);
					break;

			case 2: search(hash_table);
					break;

			case 3:	exit(0);
		}
	}
	return 0;
}

