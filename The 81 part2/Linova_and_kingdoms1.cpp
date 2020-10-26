#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define maxN 200005

vector<int>adj[maxN];
int vis[maxN],level[maxN],subsize[maxN],val[maxN];

int dfs(int node,int d)
{
    vis[node]=1;
    level[node]=d;

    int cur_size=1;
    for(int child:adj[node])
    {
        if(!vis[child])
        {
            cur_size+=dfs(child,d+1);
        }
    }
    subsize[node]+=cur_size;
    return cur_size;
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

    for(int i=1;i<=n;i++)
    {
        val[i]=level[i]-subsize[i];
    }
    sort(val+1,val+n+1,greater<int>());

    ll ans=0;
    for(int i=1;i<=k;i++)
        ans+=val[i];
    cout<<ans<<"\n";

}
