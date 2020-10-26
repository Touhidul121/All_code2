#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;

    vector<ll>v;

    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        v.push_back(a);
    }
    ll x,y,z;
    sort(v.rbegin(),v.rend());
    for(ll i=0;i<v.size()-2;i++)
    {
        x=v[i];
        y=v[i+1];
        z=v[i+2];

        if(x+y>z&&x+z>y&&y+z>x)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }

        cout<<"NO"<<endl;
}
