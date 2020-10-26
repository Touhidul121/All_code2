#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll n,k;
    cin>>n>>k;
    set<ll>st;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            st.insert(i);st.insert(n/i);
        }
    }
    if(st.size()<k)
        cout<<-1<<"\n";
    else
    {
        ll cnt=1;
        for(auto it=st.begin();it!=st.end();it++)
        {
          if(cnt==k){
                cout<<*it<<"\n";
                return 0;
          }
          cnt++;
        }
    }
}
