#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v;
int vis[1005];

void dfs(int u,int n)
{

    if(!vis[u]){

    vis[u]=1;

    for(int i=0;i<n;i++)
    {


        if((v[i].first==v[u].first||v[i].second==v[u].second )){

            dfs(i,n);
        }
    }
    }
}
int main()
{
    int n;
    cin>>n;
       v.resize(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    //sort(v.begin(),v.end());
    memset(vis,0,sizeof(vis));
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            ans++;
            dfs(i,n);
        }
    }
    cout<<ans-1<<"\n";
}
