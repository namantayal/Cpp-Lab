#include<iostream>
#include<stdlib.h>
using namespace std;
template<class d>
class stack
{
d arr[5];
int top;
d n;
public:
    stack()
    {
        top=-1;
    }
void push()
{
    if(top>=4)
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
       top++;
       cout<<"enter the value"<<endl;
       cin>>arr[top];
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"stack is empty";
    }
    else
    {
     cout<<"value deleted"<<" "<<arr[top];
     top--;
    }

}
void display()
{
    if(top==-1)
    {
        cout<<"stack is empty";
    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            cout<<arr[i]<<endl;
        }
    }
}};
int main()
{
    int c;
    stack <int>s;
    while(1)
    {
        cout<<"enter the choice 1.push 2.pop 3.display 4.exit"<<endl;
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