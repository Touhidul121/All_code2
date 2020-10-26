#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll x,y;
        x=min(a,b);
        y=max(a,b);
        if(x*2>=y)
            cout<<(4*x*x)<<"\n";
        else
            cout<<y*y<<"\n";
    }

}
