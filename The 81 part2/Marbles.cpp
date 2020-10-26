#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll nCr(ll n,ll k)
{
    ll ans=1;
    if(k>n-k)
        k=n-k;

    for(ll i=1;i<=k;i++)
    {
       ans*=(n-i+1);
       ans/=i;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
      ll n,k;
      cin>>n>>k;
      cout<<nCr(n-1,k-1)<<"\n";

    }
}
