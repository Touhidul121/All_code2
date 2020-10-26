#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,a;
    cin>>n;
    vector<ll>v,pref1(n+1),pref2(n+1);

    for(ll i=0;i<n;i++)
    {
     cin>>a;
     v.push_back(a);
     pref1[i+1]=pref1[i]+a;
    }

    sort(v.begin(),v.end());

    for(ll i=0;i<n;i++)
    {
        pref2[i+1]=pref2[i]+v[i];
    }

    ll m,b,c;
    cin>>m;

    for(ll i=0;i<m;i++)
    {
        cin>>a>>b>>c;
        if(a==1)
        {
            cout<<pref1[c]-pref1[b-1]<<endl;
        }
        else
        {
            cout<<pref2[c]-pref2[b-1]<<endl;
        }
    }
}
