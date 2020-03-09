#include<iostream>
#include<fstream>
#include <process.h>
#include <string.h>
using namespace std;
void replace()
{
	ifstream fin;
	ofstream fout;
	char r[20],ch[20],f[20];
	fin.open("a.txt",ios::in);
	fout.open("b.txt",ios::out);
	cout<<"Enter - ";
	cin>>r;
	cin>>f;
	while(!fin.eof())
	{
		fin>>ch;
		if(!strcmpi(ch,r))
        {
			fout<<f;
			fout<<" ";
        }

		else
        {
         fout<<ch;
         fout<<" ";
        }
	}
	fin.close();
	fout.close();
	remove("a.txt");
	rename("b.txt","a.txt");
}

void display()
{
	ifstream fin;
	string data;
	fin.open("a.txt",ios::in);
	while(!fin.eof())
	{
		getline(fin,data);
		cout<<data;
	}
	fin.close();

}

int main()
{
	int choice,a=1;
	while(a)
	{
		cin>>choice;
		switch(choice)
		{
			case 1:display();
					break;
			case 2:replace();
					break;
			case 3: a=0;
					break;
		}
	}
}
