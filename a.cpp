#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout;
	ifstream fin;
	string data;
	fout.open("a.txt",ios::out);
	fin.open("a.cpp",ios::in);
	while(getline(fin,data))
	{
		fout<<data<<endl;
	}
	cout<<"Copied Successfully";
	fin.close();
	fout.close();
	return 0;
}