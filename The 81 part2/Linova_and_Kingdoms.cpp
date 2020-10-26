#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100001];
int parent[100001],level[100001];
void dfs(int node,int par,int d)
{
   parent[node]=par;
   level[node]=d;

   for(int child:adj[node])
   {
       if(cnt)
       if(!vis[child])
        dfs(child,d+1);
   }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k,a,b;
    cin>>n>>k;

    for(int i=1;i<=n-1;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1,1);
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
       cout<<level[i]<<" ";
    }
    cout<<"\n";
    for(int i=1;i<=n;i++)
        mp[level[i]]++;
    int ans=0;
    for(auto it=mp.rbegin();it!=mp.rend();it++)
    {
        if(k>0)
        {
            ans+=min(k,it->second)*(it->first-1);
            k-=min(k,it->second);
        }
    }
    cout<<ans<<"\n";
}
