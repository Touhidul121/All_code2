#include<bits/stdc++.h>
using namespace std;
#define maxN 100001

vector<pair<int,int>>adj[maxN];
int vis[maxN],cnt,n,k,ans;
map<int,int>mp;

void dfs(int node,int cnt)
{
    vis[node]=1;
    if(mp[node])cnt++;
    else cnt=0;
    if(cnt>k)
        return;
    if(adj[node].size()==1 && node!=1 && cnt<=k)
    {
        ans++;
        cnt=0;
    }

    for(auto x:adj[node])
    {
        if(!vis[x.first])
            {
        dfs(x.first,cnt);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    int a,b;

    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if(a==1)
            mp[i]++;

    }

    for(int i=1;i<=n-1;i++)
    {
       cin>>a>>b;
       adj[a].push_back({b,mp[b]});
       adj[b].push_back({a,mp[a]});
    }
    dfs(1,0);
    cout<<ans<<"\n";
}
