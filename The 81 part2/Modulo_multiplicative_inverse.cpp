#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll power(ll a,ll n,ll m)
{
    if(n==0)
        return 1;
    else if(n%2==0)
    {
        ll ret=power(a,n/2,m);
        return ((ret%m)*(ret%m))%m;
    }
    else
        return ((a%m)*(power(a,n-1,m)%m))%m;
}
int main()
{
    ll a,m;
    cin>>a>>m;
    ll res=power(a,m-2,m);
    cout<<"Modulo multiplicative inverse = "<<res<<"\n";
    cout<<"Modulo multiplicative inverse of 4^(-5) where mod =7 \n";
    res=power(4,5,7);
     // power(4,5,m);
    res=power(res,7-2,7); //power(res,m-2,m);
    cout<<res<<"\n";
}
