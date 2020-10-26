#include<bits/stdc++.h>
using namespace std;

vector<int>adj[200001];
int vis[200001];
int dist[200001];

int mx_node,mx_dist;
void dfs(int node,int d)
{
    if(!vis[node])
    {
        vis[node]=1;
        if(d>mx_dist)
        {
            mx_node=node;
            mx_dist=d;
        }
        for(int child:adj[node])
        {
           if(!vis[child])
                dfs(child,d+1);
        }
    }
}

int main()
{
    int n,a,b;
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1,0);
    memset(vis,0,sizeof(vis));
    dfs(mx_node,0);

    cout<<mx_dist<<"\n";
}
