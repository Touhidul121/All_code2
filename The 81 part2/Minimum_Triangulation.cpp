#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    ll ans=0;
    for(int i=2;i<n;i++)
    {
        ans+=(i*(i+1));
    }
    cout<<ans<<"\n";
}
