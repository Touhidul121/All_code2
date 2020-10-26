#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mod;
ll power(ll a,ll n)
{
  ll res=1;
  while(n>0)
  {
      if(n&1)
        res=((res%mod)*(a%mod))%mod, n--;
      n=n/2;
      a=((a%mod)*(a%mod))%mod;
  }
  return res;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
    ll a,b;
    cin>>a>>b>>mod;
    if(b>=0)
    {
        cout<<power(a,b)<<"\n";
    }
    else
    {
        ll res=power(a,abs(b));
        res=power(res,mod-2);
        cout<<res<<"\n";
    }
    }

}
