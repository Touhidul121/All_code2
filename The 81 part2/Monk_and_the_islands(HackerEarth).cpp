#include<bits/stdc++.h>
using namespace std;

vector<int>adj[10001];
int vis[10001],dist[10001];
void bfs(int src)
{
    queue<int>q;
    vis[src]=1;
    q.push(src);
    dist[src]=0;

    while(!q.empty())
    {
        int cur=q.front();
        q.pop();

        for(int x:adj[cur])
        {
            if(!vis[x])
            {
                vis[x]=1;
                q.push(x);
                dist[x]=dist[cur]+1;
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,e,a,b;
        cin>>n>>e;

        for(int i=1;i<=n;i++)
        {
            adj[i].clear();
            vis[i]=0;
        }

        for(int i=1;i<=e;i++)
        {
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        bfs(1);
        cout<<dist[n]<<"\n";
    }
}
