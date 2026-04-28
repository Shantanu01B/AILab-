#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> g[10];
bool visited[10];

void dfs(int v)
{
    visited[v] = true;
    cout << v << " ";

    for(int i=0;i<g[v].size();i++)
        if(!visited[g[v][i]])
            dfs(g[v][i]);
}

void bfs(int start)
{
    queue<int> q;
    bool vis[10]={false};

    q.push(start);
    vis[start]=true;

    while(!q.empty())
    {
        int v=q.front();
        q.pop();

        cout<<v<<" ";

        for(int i=0;i<g[v].size();i++)
        {
            if(!vis[g[v][i]])
            {
                vis[g[v][i]]=true;
                q.push(g[v][i]);
            }
        }
    }
}

int main()
{
    int e,u,v;

    cout<<"Enter number of edges: ";
    cin>>e;

    cout<<"Enter edges:\n";

    for(int i=0;i<e;i++)
    {
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    cout<<"DFS Traversal: ";
    dfs(0);

    cout<<"\nBFS Traversal: ";
    bfs(0);
}