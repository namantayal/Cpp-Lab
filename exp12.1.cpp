#include<iostream>
using namespace std;

void create(int adj_matrix[][20],int &v)
{
	int e,i,j;
	cout<<"\nEnter the number of vertices - ";
	cin>>v;
	cout<<"\nEnter the number of edges - ";
	cin>>e;
	for(int i=0;i<v;i++)
	{
		for(int j=0;j<v;j++)
		{
			adj_matrix[i][j]=0;
		}
	}
	for(int k=0;k<e;k++)
	{
		cout<<"\nEnter the Set of connected elements(i,j) - ";
		cin>>i>>j;
		adj_matrix[i-1][j-1]=1;
	}
}

void outdegree(int adj_matrix[][20],int v,int element)
{
	int count=0;
	for(int i=0;i<v;i++)
	{
		if(adj_matrix[element-1][i]==1)
		{
			count++;
		}
	}
	cout<<"\nOutDegree - "<<count;
}

void indegree(int adj_matrix[][20],int v,int element)
{
	int count=0;
	for(int i=0;i<v;i++)
	{
		if(adj_matrix[i][element-1]==1)
		{
			count++;
		}
	}
	cout<<"\nInDegree - "<<count;
}

void display(int adj_matrix[][20],int v)
{
	cout<<"\nAdj Matrix - \n";
	for(int i=0;i<v;i++)
	{
		for(int j=0;j<v;j++)
		{
			cout<<adj_matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int adj_matrix[20][20],v,choice,x;
	create(adj_matrix,v);
	while(1)
	{
		cout<<"\n1.)Indegree\n2.)Outdegree\n3.)Display\n4.)Exit\n";
		cin>>choice;
		switch(choice)
		{
			case 1: cout<<"\nEnter element - ";
					cin>>x;
					indegree(adj_matrix,v,x);
					break;

			case 2: cout<<"\nEnter element - ";
					cin>>x;
					outdegree(adj_matrix,v,x);
					break;

			case 3: display(adj_matrix,v);
					break;

			case 4: exit(0);
		}

	}
	return 0;
}