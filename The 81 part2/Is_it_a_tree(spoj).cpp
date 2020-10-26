#include<bits/stdc++.h>
using namespace std;

vector<int>adj[10001];
int vis[10001];

void dfs(int node)
{
    vis[node]=1;

    for(int child:adj[node])
    {
        if(!vis[child])
            dfs(child);
    }
}

int main()
{
    int n,m,a,b;
    cin>>n>>m;

    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int cnt=0;

    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
            cnt++;
        }
    }
    if(cnt==1 && m==n-1)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
}
