#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

f()
{
    ll n,k;
    cin>>n>>k;
    ll a[n+5];
    vector<ll>p(n+5);
    vector<pair<int,int>>v;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    for(ll i=1;i<n-1;i++)
    {
        if(a[i]>a[i-1]&&a[i]>a[i+1])
        {
            p[i+1]++;
        }
    }
    for(ll i=1;i<=n;i++)
    {
        p[i]=p[i]+p[i-1];
    }

    ll count=0;
    for(ll i=1,j=k+i-1;j<=n;i++,j++)
    {

      count=p[j-1]-p[i];
     v.push_back(make_pair(count+1,i));
    }
    sort(v.begin(),v.end());
ll    x=v[v.size()-1].first;

    for(ll i=0;i<v.size();i++)
    {
        if(v[i].first==x)
        {
            cout<<v[i].first<<" "<<v[i].second<<"\n";
            break;
        }
    }

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        f();
    }
}
