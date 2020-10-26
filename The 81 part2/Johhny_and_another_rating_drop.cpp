#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<ll,ll>mp;
    mp[1]=1;
    for(ll i=2;i<=1e18;i=i*2)
    {
        mp[i]=mp[i/2]*2ll+1ll;
    }
    int t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;

       ll ans=0;

       ll j=0,x=n;
       while(n)
       {
           if(x&(1ll<<j))
           {
               ans+=mp[pow(2,j)];
           }

           j++;
           n=n>>1ll;
       }
       cout<<ans<<"\n";
    }
}
