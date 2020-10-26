#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll cnt=0;
        ll f=1;
        ll x=0,ans=0;

        for(ll i=0;i<=63;i++)
        {
            ll y=x+(f<<i);
            cout<<y<<" ";
            if(y>n)break;

            for(ll j=0;j<=63;j++)
            {
                if((x&(f<<j))==(y&(f<<j)))
                cnt++;
            }
            ans+=cnt;
            cnt=0;
            x=y;
        }
        cout<<ans<<"\n";
    }
}
