#include<bits/stdc++.h>
using namespace std;

#define mx 1000
vector<int>adj[mx];
int vis[mx],dist[mx];

void bfs(vector<int>source)
{
    queue<int>q;
    for(int i=0;i<source.size();i++)
    {
        q.push(source[i]);
        dist[source[i]]=0;
        vis[source[i]]=1;
    }

    while(!q.empty())
    {
        int cur=q.front();
        q.pop();

        for(int child:adj[cur])
        {
            if(!vis[child])
            {
                vis[child]=1;
                dist[child]=dist[cur]+1;
                q.push(child);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,e,a,b;
    cin>>n>>e;

    for(int i=1;i<=e;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int no_source;
    cin>>no_source;

    vector<int>source;
    for(int i=1;i<=no_source;i++)
    {
        cin>>a;
        source.push_back(a);
    }

    bfs(source);

    for(int i=1;i<=n;i++)
        cout<<dist[i]<<" ";
}
