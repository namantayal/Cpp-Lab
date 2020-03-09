#include <iostream>
using namespace std;

class Temperature
{
    protected:
    float temp_c;
    public:
    Temperature(float x)
    {
        temp_c=x;
    }
    virtual void calculate()=0;
};

class fahrenheit:public Temperature
{
    private:
    float temp_f;
    public:
    fahrenheit(int r):Temperature(r)
    {
         temp_f=(temp_c*1.8)+32;
    }
    void calculate()
    {

        cout<<"\nTemp in Fahrenheit is - "<<temp_f;
    }
};

class kelvin:public Temperature
{
    private:
    float temp_k;
    public:
    kelvin(float g):Temperature(g)
    {
        temp_k=temp_c+273;
    }
    void calculate()
    {

        cout<<"\nTemp in Kelvin is - "<<temp_k;
    }
};

int main()
{
    int x;
    cout<<"Enter Temp - ";
    cin>>x;
    fahrenheit f(x);
    kelvin k(x);
    Temperature *s=&f;
    Temperature *m=&k;
    s->calculate();
    m->calculate();
    return 0;
}