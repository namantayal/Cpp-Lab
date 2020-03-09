#include<iostream>
#include<exception>
using namespace std;

class myexception:public exception
{
	public:
	const char* what()
	{
		return "\nElement cannot be inserted";
	}
};

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
	int sap;
	cout<<"\nEnter Sap - ";
	cin>>sap;
	int index=hashfunction(sap);
	if(hash_table[index]==0)
		cout<<"\nNot Found";
	else
		cout<<"\nFound";
}

void insert(int hash_table[])
{
	int sap;
	cout<<"\nEnter Sap - ";
	cin>>sap;
	try
	{
		int index=hashfunction(sap);
		if(hash_table[index]==0)
		{
			hash_table[index]=sap;
			cout<<"\nInsetred at index - "<<index;
		}
		else
			throw myexception();
	}
	catch(myexception obj)
	{
		cerr<<obj.what();
	}
}

int main()
{
	int hash_table[10],choice;
	for(int i=0;i<10;i++)
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

