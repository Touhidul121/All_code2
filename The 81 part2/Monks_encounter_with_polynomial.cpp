#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll value(ll x,ll a,ll b,ll c)
{
  return a*x*x+b*x+c;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,k;
        cin>>a>>b>>c>>k;
        if(c>=k)
            cout<<0<<"\n";
        else
        {
            ll l=0,h,mid,x,ans=0;
            h=(ll)ceil(sqrt(k*1.0));
            while(l<=h)
            {
                mid=(l+h)/2;
                x=value(mid,a,b,c);
                if(x>=k && value(mid-1,a,b,c)<k)
                {
                    ans=mid;
                    break;
                }
                else if(x<k)
                    l=mid+1;
                else
                    h=mid-1;
            }
            cout<<ans<<"\n";

        }
    }
}
