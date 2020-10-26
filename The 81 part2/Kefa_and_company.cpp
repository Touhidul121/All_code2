#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,a,b,d;
    cin>>n>>d;
    vector<pair<ll,ll>>v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());

    vector<ll>pref(n+1);
    for(int i=1;i<=n;i++)
    {
        pref[i]=pref[i-1]+v[i].second;
    }
    long long ans=0;
    int i=1,j=1;
    while(i<=n)
    {
        while(v[j].first-v[i].first<d && j<=n)
        {
            j++;
        }
        j--;
        ans=max(ans,pref[j]-pref[i-1]);
        i++;
    }
    cout<<ans<<"\n";
}
