#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ll n,a;
    cin>>n;
    map<ll,ll>mp;

    for(ll i=0;i<n;i++)
    {
        cin>>a;
        mp[a-i]=mp[a-i]+a;
    }
    ll ans=0;
    for(auto x:mp)
    {
        ans=max(x.second,ans);
    }
    cout<<ans<<"\n";
}
