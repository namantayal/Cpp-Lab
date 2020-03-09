#include<iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

class Stack
{
	Node *top;
public:
	Stack()
	{
		top=NULL;
	}
	void push();
	void pop();
	void display();
};

void Stack::push()
{
	Node *temp=new Node;
	temp->next=NULL;
	cout<<"\nEnter the Element - ";
	cin>>temp->data;
	if(top==NULL)
	{
		top=temp;
	}
	else
	{
		temp->next=top;
		top=temp;
	}
}

void Stack::pop()
{
	if(top==NULL)
		cout<<"\nStack is empty(Underflow)!!";
	else
	{
		cout<<"\nDeleted Node is - "<<top->data;
		Node *temp=top;
		top=top->next;
		delete temp;
	}
}

void Stack::display()
{
	Node *temp=top;
	while(temp!=NULL)
	{
		cout<<"\n"<<temp->data;
		temp=temp->next;
	}
}

int main()
{
	int choice;
	Stack s1;
	while(1)
	{
		cout<<"\n\nChoose any option - ";
		cout<<"\n1.Push\n2.Pop\n3.Display\n4.Exit\n\n";
		cin>>choice;
		switch(choice)
		{
			case 1: s1.push();
					break;

			case 2: s1.pop();
					break;

			case 3: s1.display();
					break;

			case 4: exit(0);

			default: cout<<"\nWrong Input";
		}
	}
	return 0;
}