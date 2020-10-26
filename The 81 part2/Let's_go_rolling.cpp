#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define N 3001
pair<ll,ll> ar[N];
int dp[N][N];

ll getans(ll pos,ll pre,ll n)
{
    if(pos>n)return 0;
   if(dp[pos][pre]!=-1)
        return dp[pos][pre];

    ll x=ar[pos].second+getans(pos+1,pos,n); // pin it
    ll y=abs(ar[pos].first-ar[pre].first)+getans(pos+1,pre,n); // leave it

    return dp[pos][pre]=min(x,y);
}

int main()
{
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++)
        cin>>ar[i].first>>ar[i].second;
    sort(ar+1,ar+n+1);
    memset(dp,-1,sizeof(dp));
    ll res=getans(2,1,n)+ar[1].second;
    cout<<res<<"\n";
}

