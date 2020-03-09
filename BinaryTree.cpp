#include<iostream>
#include <stdlib.h>
using namespace std;
 
struct Node
{
 	int data;
 	Node *right;
 	Node *left;
};

Node* CreateNode()
{
	Node *temp=new Node;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

class BinaryTree
{
 	Node *root;
 public:
 	BinaryTree()
 	{
 		root=NULL;
 	}
 	void add(int,Node*);
 	void display(Node*);
 	void search(int,Node*);
};

void BinaryTree::add(int val, Node *p=NULL)
{
 	if(p==NULL)
 		p=root;
 	if(root==NULL)
 	{
 		Node *temp=CreateNode();
 		temp->data=val;
 		root=temp;
 	}
 	else
 	{
 		if(p->data>val)
 		{
 			if(p->left==NULL)
 			{
 				Node *temp=CreateNode();
 				temp->data=val;
 				p->left=temp;
 			}
 			else
 			{
 				add(val,p->left);
 			}
 		}
 		else
 		{
 			if(p->right==NULL)
 			{
 				Node *temp=CreateNode();
 				temp->data=val;
 				p->right=temp;
 			}
 			else
 			{
 				add(val,p->right);
 			}	

 		}
 	}
}

void BinaryTree::display(Node *p=NULL)
{
 	if(p==NULL)
 		p=root;
 	if(p->left!=NULL)
 	{
 		display(p->left);
 	}
 	cout<<p->data<<endl;
 	if(p->right!=NULL)
 	{
 		display(p->right);
 	}
}

void BinaryTree::search(int val, Node *p=NULL)
{
	if(p==NULL)
 		p=root;
	if(p->data==val)
	{
		cout<<"FOUND";
	}
	else if(p->data>val && p->left!=NULL)
	{	
		cout<<"L ";
		search(val, p->left);
	}
	else if(p->data<val && p->right!=NULL)
	{
		cout<<"R ";
		search(val, p->right);
	}
	else
	{
		cout<<"NOT FOUND";
	}
}

int main()
{
	int choice,temp;
	BinaryTree obj;
	while(1)
	{
		cout<<"\n1.Insert\n2.Display\n3.Search\n4.Exit\n\n";
		cin>>choice;
		switch(choice)
		{
			case 1: cout<<"\nEnter a number - ";
					cin>>temp;
					obj.add(temp);
					break;

			case 2: obj.display();
					break;

			case 3: cout<<"\nEnter a number - ";
					cin>>temp;
					obj.search(temp);
					break;

			case 4: exit(0);

			default: cout<<"\nWrong Input";
		}
	}
	return 0;
}