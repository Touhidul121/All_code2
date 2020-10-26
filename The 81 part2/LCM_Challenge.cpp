#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll lcm(ll a,ll b){
    return (a*b)/__gcd(a,b);
}
int main()
{
    ll n;
    cin>>n;
ll t;
t=(n<50)?n:50;
ll ans=0;

for(int i=0;i<t;i++)
{
    for(int j=0;j<t;j++)
    {
        for(int k=j;k<t;k++)
        {
            ans=max(ans,lcm(n-i,lcm(n-j,n-k)));
        }
    }
}
cout<<ans<<endl;

}
