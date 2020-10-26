#include<bits/stdc++.h>
using namespace std;

#define maxN 100001
vector<int>adj[maxN];
int vis[maxN],par[maxN];
int n,m,a,b,last;
bool f=false;

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
                vis[child]=1;
                par[child]=cur;

                if(child==n)
                {
                    f=true;
                    last=child;
                    break;
                }
                q.push(child);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    cin>>n>>m;

    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bfs(1);

    if(f==false)
        cout<<"IMPOSSIBLE"<<"\n";
    else
    {
        vector<int>v;

        while(last!=-1)
        {
            v.push_back(last);
            last=par[last];
        }
        reverse(v.begin(),v.end());
        cout<<v.size()<<"\n";
        for(int x:v)
            cout<<x<<" ";
        cout<<"\n";
    }
}
