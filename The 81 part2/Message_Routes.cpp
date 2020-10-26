#include<bits/stdc++.h>
using namespace std;
#define maxN 100001
vector<int>adj[maxN];
int vis[maxN],dist[maxN],par[maxN];
bool f=false;
int n;



void bfs(int src)
{
    par[src]=-1;
    queue<int>q;
    vis[src]=1;
    q.push(src);
    while(!q.empty())
    {
        int cur=q.front();
        q.pop();

        for(int child:adj[cur])
        {
            if(!vis[child])
            {
                par[child]=cur;
                vis[child]=1;
                if(child==n)
                {
                    f=true;
                    return;
                }
                q.push(child);
            }
        }
    }
}
int main()
{
    int m,a,b;
    cin>>n>>m;

    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs(1);
    if(f==0)
    {
        cout<<"IMPOSSIBLE"<<"\n";
    }
    else
    {
        vector<int>v;
        while(par[n]!=-1)
        {
           v.push_back(n);
           n=par[n];
        }
        v.push_back(1);
        reverse(v.begin(),v.end());
        cout<<v.size()<<"\n";
        for(int x:v)
            cout<<x<<" ";
    }
}
