#include <iostream>
using namespace std;

class student
{
	int sapid;
	string name;
	float marks[6];
public:
	void get_Details()
	{
		cout<<"\nName - ";
		cin>>name;
		cout<<"SAP - ";
		cin>>sapid;
		for(int i=0;i<6;i++)
		{
			cout<<"Marks of subject "<<i+1<<" - ";
			cin>>marks[i];
		}
	}
	friend class result;
};

class result
{
	float total_marks;
	float avg_marks;
public:
	void calc_result(student s)
	{
		int temp=0;
		for(int i=0;i<6;i++)
		{
			temp+=s.marks[i];
		}
		total_marks=temp;
		avg_marks=temp/6;
		cout<<"\nTotal marks - "<<total_marks;
		cout<<"\nAverage Marks - "<<avg_marks;
	}
};

int main()
{
	student stud;
	result r;
	stud.get_Details();
	r.calc_result(stud);
	return 0;
}