#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int ver, edges=0, n;
	cout << "Enter the number of vertices in your graph: ";
	cin >> ver;
	int adj_matrix[ver][ver],mapping[ver][ver];
	cout<<"Enter the vertices which are mapped with other vertices otherwise enter 0"<<endl;
	for(int i=0;i<ver;i++)
	{
		for(int j=0;j<ver;j++)
		{
			mapping[i][j]=0;
			cout<<i+1<<": ";
			cin>>mapping[i][j];
			if(mapping[i][j]!=0)
			{
				adj_matrix[i][j]=1;
				edges+=1;
			}
			else{
				adj_matrix[i][j]=0;
			}
		}
	}
	cout<<"The list of edges of the graph is :"<<endl;
	for(int i=0;i<ver;i++)
	{
		for(int j=0;j<ver;j++)
		{
			cout<<i+1<<"->"<<mapping[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"The adjacency matrix is :"<<endl;
	for(int i=0;i<ver;i++)
	{
		for(int j=0;j<ver;j++)
		{
			cout<<adj_matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	cout <<endl<< "The number of edges for the graph is: "<<edges/2 << endl;

	return 0;
}
