#include<bits/stdc++.h>
using namespace std;
vector<int>adj[10001];
int vis[10001],dist[10001];

void dfs(int node,int d)
{
    vis[node]=1;
    dist[node]=d;

    for(int child:adj[node])
    {
        if(!vis[child])
        {
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
  int x=0;

  for(int i=1;i<=n;i++)
  {
      if(x<dist[i])
      {
          x=dist[i];
          b=i;
      }
  }
  for(int i=1;i<=n;i++)
    vis[i]=0, dist[i]=0;
  dfs(b,0);
  x=0;
  for(int i=1;i<=n;i++)
    if(x<dist[i])
    x=dist[i];

  cout<<x<<"\n";


}
