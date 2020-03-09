#include<iostream>
using namespace std;
template<class a>
void bubble_sort(a A[],int n)
{
    a t;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                t=A[j];
                A[j]=A[j+1];
                A[j+1]=t;
            }
        }
    }
}

template<class a>
void input(a A[],int &n)
{
    cout<<"Enter number of elements - "<<endl;
    cin>>n;
    cout<<"Enter elements - "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
}
template<class a>
void output(a A[], int n)
{
    cout<<"\nSorted array - ";
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
}
int main()
{
    int array_i[30];
    float array_f[30];
    int n,choice;
    while(1)
    {
        cout<<"\n1.)Integer Array\n2.)Float Array\n3.)Exit\n";
        cin>>choice;
        switch(choice)
        {
            case 1: input(array_i,n);
                    bubble_sort(array_i,n);
                    output(array_i,n);
                    break;

            case 2: input(array_f,n);
                    bubble_sort(array_f,n);
                    output(array_f,n);
                    break;

            case 3: exit(0);

            default:cout<<"\nWrong Choice!!";
        }
    }
    return 0;
}