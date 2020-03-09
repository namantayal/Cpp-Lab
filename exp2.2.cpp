#include <iostream>
using namespace std;

class Queue
{
    int front,rear;
    int queue[30];
public:
    Queue():front(-1),rear(-1){}
    int isfull()
    {
        if(rear==29)
            return 1;
        else 
            return 0;
    }
    int isempty()
    {
        if(front==-1)
            return 1;
        else 
            return 0;
    }   
    void enqueue(int x)
    {
        if(isfull())
            cout<<"\nOverflow";
        else if(front==-1)
        {
            front=0;
            rear=0;
        }
        else
            rear++;
        queue[rear]=x;
    }
    void dequeue()
    {
        if(isempty())
        {
            cout<<"\nUnderflow";
        }
        else if(rear==front)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            cout<<"\nDeleted node is:"<<queue[front];
            front++;
        }
    }
    void display()
    {
        for(int i=front;i<=rear;i++)
        {
            cout<<endl<<queue[i]<<"\n";
        }
    }
};

int main()
{
    Queue q1;
    q1.enqueue(10);
    q1.enqueue(9);
    q1.enqueue(8);
    q1.enqueue(7);
    q1.display();
    q1.dequeue();
    q1.display();
    return 0;
}