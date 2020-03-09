#include<iostream>
using namespace std;

template<class A>
class stack 
{
    A arr[5];
    int top;
    public:
    stack()
    {
        top=-1;
    }
    void push()
	{
    	if(top==100)
    		cout<<"\nOverflow";
    	else
    	{
        	top++;
        	cout<<"\nEnter the value - ";
        	cin>>arr[top];
    	}
	}
	void pop()
	{
    	if(top==-1)
    		cout<<"\nUnderflow";
    	else
    	{
        	cout<<"\nDeleted element is - "<<arr[top];
        	top--;
    	}
	}

	void display()
	{
    	for(int i=top;i>=0;i--)
    	{
        	cout<<arr[i]<<" ";
    	}
	}   
};

int main()
{
    int c;
    stack <int>s;
    while(1)
    {
        cout<<"\n1.push  2.pop  3.display  4.exit"<<endl;
        cin>>c;
        switch(c)
        {
            case 1:s.push();
            break;
            case 2:s.pop();
            break;
            case 3:s.display();
            break;
            case 4:exit(0);
            default:cout<<"wrong input";
        }
    }
    return 0;
}