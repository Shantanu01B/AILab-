#include <iostream>
using namespace std;

int main()
{
    int n, cost[10][10], dist[10], visited[10]={0};
    int i, j, source, min, next;

    cout<<"Enter number of vertices: ";
    cin>>n;

    cout<<"Enter cost matrix:\n";
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>cost[i][j];

    cout<<"Enter source node: ";
    cin>>source;

    for(i=0;i<n;i++)
        dist[i]=cost[source][i];

    visited[source]=1;
    dist[source]=0;

    for(int k=1;k<n;k++)
    {
        min=999;

        for(i=0;i<n;i++)
        {
            if(!visited[i] && dist[i]<min)
            {
                min=dist[i];
                next=i;
            }
        }

        visited[next]=1;

        for(i=0;i<n;i++)
        {
            if(!visited[i] && dist[next]+cost[next][i]<dist[i])
                dist[i]=dist[next]+cost[next][i];
        }
    }

    cout<<"Shortest distances:\n";

    for(i=0;i<n;i++)
        cout<<source<<" -> "<<i<<" = "<<dist[i]<<endl;
}


/*
Sample Input (Use in Practical Exam)

Example:

Enter number of vertices:
4

Enter cost matrix:

0 2 999 6
2 0 3 8
999 3 0 1
6 8 1 0

Enter source node:
0

NOTE:

999 = no connection (infinity)
Expected Output
Shortest distances:

0 -> 0 = 0
0 -> 1 = 2
0 -> 2 = 5
0 -> 3 = 6*/