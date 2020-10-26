#include<bits/stdc++.h>
using namespace std;

#define maxN 100001
typedef long long ll;
ll arr[maxN];

ll f(ll k,ll n)
{
    ll res=0;
    for(int i=0;i<n-1;i++)
    {
        ll x,y;
        if(arr[i]==-1)x=k;
        else x=arr[i];
        if(arr[i+1]==-1)y=k;
        else y=arr[i+1];
        res=max(res,abs(y-x));
    }
    return res;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    bool f1=false;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]!=-1)f1=true;
    }
    if(!f1)cout<<0<<" "<<1<<"\n";
    else{

    ll lo=0,hi=*max_element(arr,arr+n);

    ll ans=0,res=LLONG_MAX;
    while(lo<=hi)
    {

        ll mid=(lo+hi)/2;
        ll res1=f(mid,n);
        if(res1<res)
        {
            res1=res;
            ans=mid;
        }
        ll x1=(mid+1+hi)/2;
        ll x2=(lo+mid-1)/2;
        ll r1=f(x1,n);
        ll r2=f(x2,n);
        if(r1<res)
        {
            res=r1;
            ans=x1;
        }
        if(r2<res)
        {
            res=r2;
            ans=x2;
        }
        if(r1<=r2)
            lo=mid+1;
        else
            hi=mid-1;
    }
    cout<<res<<" "<<ans<<"\n";
    }
    }
}
