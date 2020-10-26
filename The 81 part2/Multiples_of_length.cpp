#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    if(n==1)
    {
        cout<<1<<" "<<1<<"\n";
        cout<<0<<"\n";
        cout<<1<<" "<<1<<"\n";
        cout<<0<<"\n";
        cout<<1<<" "<<1<<"\n";
        cout<<-v[0]<<"\n";
    }
    else
    {
        cout<<1<<" "<<1<<"\n";
        cout<<-v[0]<<"\n";
        v[0]=0;
        cout<<2<<" "<<n<<"\n";
        for(int i=1;i<n;i++)
        {
            ll len=n-1;
            ll val=(v[i]%n)*len;
            v[i]+=val;
            cout<<val<<" ";
        }

        cout<<"\n";
        cout<<1<<" "<<n<<"\n";
        for(int i=0;i<n;i++)
            cout<<-v[i]<<" ";
        cout<<"\n";

    }
}
