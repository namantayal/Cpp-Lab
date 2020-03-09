#include <iostream>

using namespace std;
class A
{
    int no;
    public:
    int fact(int &no)
    {
        if(no==1)
        return 1;
        else
        {
            int x=no-1;
        return no*fact(x);
        }
    }
  A(int x)
  {
      cout<<"Constructor is called"<<endl;
      no=x;
  }
  ~A()
  {
      cout<<"Destructor is called"<<endl;
  }
};
int main()
{
    int a,result;
    cout<<"Enter the number whose factorial you want to calculate "<<endl;
    cin>>a;
    
    A obj(10);
    result=obj.fact(a);
    cout<<"Factorial thus calculated is "<<result<<endl;

    return 0;
}