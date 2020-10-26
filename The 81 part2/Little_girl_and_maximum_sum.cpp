#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll n,q,a,l,r;
    cin>>n>>q;

    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;v.push_back(a);
    }
    sort(v.rbegin(),v.rend());

    vector<ll>val(n+1,0); // to keep count how many times a cell appears

    for(int i=0;i<q;i++)
    {
        cin>>l>>r;
        l--;
        val[l]++;
        val[r]--;
    }

    for(int i=0;i<n;i++)
        val[i+1]+=val[i];

    sort(val.rbegin(),val.rend());

    ll ans=0;

    for(int i=0;i<n;i++)
    {
        ans+=v[i]*1ll*val[i];
    }

    cout<<ans<<"\n";


}
