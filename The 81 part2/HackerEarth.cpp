#include<bits/stdc++.h>
using namespace std;

vector<int>adj[10002];
int vis[10002],dist[10002],cnt;

void bfs(int src,int d)
{
    queue<int>q;
    vis[src]=1;
    dist[src]=0;
    q.push(src);

    while(!q.empty())
    {
        int cur=q.front();
        q.pop();

        for(int x:adj[cur])
        {
            if(!vis[x])
            {
                vis[x]=1;
                dist[x]=dist[cur]+1;
                q.push(x);
                if(dist[x]==d){
                    cnt++;
                }
            }
        }
    }
}
int main()
{
    int n,e,a,b;
    cin>>n>>e;
    for(int i=1;i<=e;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int q,m,d;
    vector<int>ans;
    cin>>q;
    for(int i=1;i<=q;i++){
    cin>>m>>d;
    cnt=0;
    bfs(m,d);
    ans.push_back(cnt);
    memset(vis,0,sizeof(vis));
    memset(dist,0,sizeof(dist));
    }
for(auto x:ans)
    cout<<x<<"\n";

}
