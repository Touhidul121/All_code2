#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n,a;
    cin>>n;
    map<ll,ll>mp;
    for(ll i=1;i<=n;i++)
    {
        cin>>a;
        mp[a-i]+=a;
    }
    ll mx=0;
    for(auto x:mp)
    {
        mx=max(mx,x.second);
    }
    cout<<mx<<"\n";
}
