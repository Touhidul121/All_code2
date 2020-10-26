#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll x,y,n;
    cin>>x>>y>>n;
    ll ar[6]={x,y,y-x,-x,-y,x-y};
    n--;
    ll ans=(ar[n%6])%mod;
    if(ans<0)
        ans=(ans+mod)%mod;
    cout<<ans<<"\n";
}
