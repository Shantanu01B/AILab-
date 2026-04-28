#include <iostream>
#include <algorithm>
using namespace std;

struct edge
{
    int u,v,w;
} e[10];

int parent[10];

int find(int i)
{
    while(parent[i])
        i=parent[i];
    return i;
}

void uni(int i,int j)
{
    parent[j]=i;
}

int main()
{
    int n,m,i,sum=0;

    cout<<"Enter vertices and edges: ";
    cin>>n>>m;

    cout<<"Enter edges (u v w):\n";

    for(i=0;i<m;i++)
        cin>>e[i].u>>e[i].v>>e[i].w;

    sort(e,e+m,[](edge a,edge b)
    {
        return a.w<b.w;
    });

    cout<<"Edges in MST:\n";

    for(i=0;i<m;i++)
    {
        int u=find(e[i].u);
        int v=find(e[i].v);

        if(u!=v)
        {
            cout<<e[i].u<<" - "<<e[i].v<<endl;
            sum+=e[i].w;
            uni(u,v);
        }
    }

    cout<<"Minimum cost = "<<sum;
}