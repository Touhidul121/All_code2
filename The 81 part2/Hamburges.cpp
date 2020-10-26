#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll nb,ns,nc,pb,ps,pc,cb,cs,cc,total;

ll f(ll x)
{
    return max(0ll,cb*x-nb)*pb+max(0ll,cs*x-ns)*ps+max(0ll,cc*x-nc)*pc;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='B')cb++;
        else if(s[i]=='S')cs++;
        else cc++;
    }
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>total;

    ll lo=0,hi=1e14,ans=0,mid;

    while(lo<=hi)
    {
        mid=(lo+hi)/2;

        if(f(mid)<=total)
        {
            ans=max(ans,mid);
            lo=mid+1;
        }
        else hi=mid-1;
    }
    cout<<ans<<"\n";
}
