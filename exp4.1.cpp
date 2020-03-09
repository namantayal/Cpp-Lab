#include <iostream>
using namespace std;

class student
{
	string name;
	int roll;
	char gender;
public:
	void student_Details()
	{
		cout<<"\nName - ";
		cin>>name;
		cout<<"Roll - ";
		cin>>roll;
		cout<<"Gender - ";
		cin>>gender;
	}
	void display_student_Details()
	{
		cout<<"\nName - "<<name;
		cout<<"\nRoll - "<<roll;
		cout<<"\nGender - "<<gender;
	}
};

class Internal_exam:public student
{
protected:
	float imarks[6];
public:
	void get_imarks()
	{
		cout<<"\n";
		for(int i=0;i<6;i++)
		{
			cout<<"Marks of subject "<<i+1<<" - ";
			cin>>imarks[i];
		}
	}
	void display_imarks()
	{
		for(int i=0;i<6;i++)
		{
			cout<<"\nMarks of subject "<<i+1<<" - "<<imarks[i];
		}
	}
};

class External_exam:public student
{
protected:
	float emarks[6];
public:
	void get_emarks()
	{
		cout<<"\n";
		for(int i=0;i<6;i++)
		{
			cout<<"Marks of subject "<<i+1<<" - ";
			cin>>emarks[i];
		}
	}
	void display_emarks()
	{
		for(int i=0;i<6;i++)
		{
			cout<<"\nMarks of subject "<<i+1<<" - "<<emarks[i];
		}
	}
};

class Result:public Internal_exam,public External_exam
{
	float result[6];
public:
	void display_Result()
	{
		for(int i=0;i<6;i++)
		{
			result[i]=(0.4*imarks[i])+(0.6*emarks[i]);
			cout<<"\nResult of subject "<<i+1<<" - "<<result[i];
		}
	}
};

int main()
{
	Result stud;
	stud.Internal_exam::student_Details();
	stud.Internal_exam::display_student_Details();
	cout<<"\nEnter Internal Marks";
	stud.get_imarks();
	cout<<"\nEnter Internal Marks";
	stud.get_emarks();
	stud.display_Result();
	return 0;
}