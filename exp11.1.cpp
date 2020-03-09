#include<iostream>
#include<stdlib.h>
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
 	void add(Node*);
 	void display(Node*);
};

void BinaryTree::add(Node *p=NULL)
{
 	if(root==NULL)
 	{
 		cout<<"\nCreate Root - ";
 		Node *temp=CreateNode();
 		cout<<"\nEnter Data - ";
 		cin>>temp->data;
 		root=temp;
 		add(root);
 	}
 	else
 	{
 		char choice;
 		cout<<"\nWant to add left(y/n)- ";
 		cin>>choice;
 		if(choice=='y')
 		{
 				Node *temp=CreateNode();
 				cout<<"\nEnter Data - ";
 				cin>>temp->data;
 				p->left=temp;
 				cout<<"\nIncrease Depth(y/n) - ";
 				cin>>choice;
 				if(choice=='y')
 					add(temp);
 		}
 		else
 		{
 			p->left=NULL;
 		}
 		cout<<"\nWant to add right(y/n)- ";
 		cin>>choice;
 		if(choice=='y')
 		{
 				Node *temp=CreateNode();
 				cout<<"\nEnter Data - ";
 				cin>>temp->data;
 				p->right=temp;
 				cout<<"\nIncrease Depth(y/n) - ";
 				cin>>choice;
 				if(choice=='y')
 					add(temp);
 		}
 		else
 		{
 			p->right=NULL;
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

int main()
{
	BinaryTree b1;
	b1.add();
	b1.display();
	return 0;
}