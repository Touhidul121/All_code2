#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
typedef long long ll;

int main()
{
    ll x,y,n,ans=0;
    cin>>x>>y>>n;
    if(n%6==1)
        ans=x;
    else if(n%6==2)
        ans=y;
    else if(n%6==3)
        ans=y-x;
    else if(n%6==4)
        ans=-x;
    else if(n%6==5)
        ans=-y;
    else
        ans=x-y;
    ans=ans%mod;
    if(ans<0)
        cout<<ans+mod<<"\n";
    else
        cout<<ans<<"\n";
}
