#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll bigmod(ll a,ll n,ll m)
{
  if(n==0)
        return 1;
        if(n==1)
            return a%m;

      return ((bigmod(a,n%2,m)%m)*(bigmod(a,n/2,m)%m)*(bigmod(a,n/2,m)%m))%m;

}

ll calculate(ll a,ll b,ll n)
{
    ll candidate=1;
    ll num=abs(a-b);
    if(a==b)
    {
        return (bigmod(a,n,mod)+bigmod(b,n,mod))%mod;
    }
    else
    {


        for(ll i=1;i<=sqrt(num);i++)
        {
            if(num%i==0)
            {
              int tmp = (bigmod(a,n,i)+bigmod(b,n,i))%i;
              if(tmp==0)
                candidate=max(candidate,i);
              tmp = (bigmod(a,n,num/i)+bigmod(b,n,num/i))%(num/i);
              if(tmp==0)
                candidate=max(candidate,num/i);
            }
        }
    }
    return candidate%num;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    ll a,b,n;
    cin>>a>>b>>n;
    ll res=calculate(a,b,n);
    cout<<res<<"\n";
    }
}
