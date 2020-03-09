#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	int count=0;
	ofstream fout;
	fout.open("a.txt",ios::out);
	cout<<"Enter the data to be inputted in file - \n";
	string temp;
	getline(cin,temp);
	fout<<temp;
	fout.close();
	ifstream fin;
	fin.open("a.txt",ios::in);
	char data[20], word[20];
	cout<<"\nEnter the word - ";
	cin>>word;
	while(fin>>data)
	{
		if(!strcmpi(word,data))
			count++;
	}
	cout<<count;
	fin.close();
	return 0;

}