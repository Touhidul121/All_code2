#include<bits/stdc++.h>
const long long mod=998244353;
using namespace std;
typedef long long ll;

int main()
{

    ll n,m,a,b;
    cin>>n>>m;
    ll way[200005];
    memset(way,0,sizeof(way));
    way[0]=1;
    vector<ll>coin;
    set<int>st;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        st.insert(a);st.insert(b);
    }
    for(auto x:st)coin.push_back(x);

    n--;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=0;j<coin.size();j++)
        {
           if(i>=coin[j])
            way[i]=(way[i]%mod+way[i-coin[j]]%mod)%mod;
        }
    }
    cout<<way[n]<<"\n";
}

