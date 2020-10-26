#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,c;
    cin>>n;
    vector<ll>a,b;
    for(int i=0;i<n;i++)
    {
        cin>>c;
        a.push_back(c);
    }
    for(int i=0;i<n;i++)
    {
        cin>>c;
        b.push_back(c);
    }
    ll ans=INT_MAX;
    for(int i=1;i<n;i++)
    {
        ans=min(ans,b[0]*a[i]+a[n-1]*b[i]);
    }
    cout<<ans<<"\n";
}
