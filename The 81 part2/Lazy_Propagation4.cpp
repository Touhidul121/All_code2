#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long mod=1e9+7;
const long long maxN=100001;
ll arr[maxN];
vector<ll>st(maxN,1);
vector<ll>lazy(maxN,1);

void buildtree(ll si,ll ss,ll se)
{
    if(ss==se)
    {
        st[si]=arr[ss];
        return;
    }
    ll mid=(ss+se)/2;
    buildtree(2*si+1,ss,mid);
    buildtree(2*si+2,mid+1,se);

    st[si]=(st[2*si+1]+st[2*si+2])%mod;
}

void update(ll si,ll ss,ll se,ll qs,ll qe,ll val)
{
    if(lazy[si]!=1)
    {
        ll r=(lazy[si]*(se-ss+1))%mod;
        st[si]=(st[si]*r)%mod;
        if(ss!=se)
        {
            lazy[2*si+1]=(lazy[2*si+1]*lazy[si])%mod;
            lazy[2*si+2]=(lazy[2*si+2]*lazy[si])%mod;
        }
      lazy[si]=1;
      //return;

    }
    if(ss>se || ss>qe || se<qs)return;
    if(ss>=qs && se<=qe)
    {
        st[si]=(st[si]*val)%mod;
        if(ss!=se)
        {
           lazy[2*si+1]=(lazy[2*si+1]*val)%mod;
        lazy[2*si+2]=(lazy[2*si+2]*val)%mod;
        }
        return;
    }
    ll mid=(ss+se)/2;
    update(2*si+1,ss,mid,qs,qe,val);
    update(2*si+2,mid+1,se,qs,qe,val);

    st[si]=(st[2*si+1]+st[2*si+2])%mod;
}

ll query(ll si,ll ss,ll se,ll qs,ll qe)
{
  if(lazy[si]!=1)
    {
        ll r=(lazy[si]*(se-ss+1))%mod;
        st[si]=(st[si]*r)%mod;
        if(ss!=se)
        {
            lazy[2*si+1]=(lazy[2*si+1]*lazy[si])%mod;
            lazy[2*si+2]=(lazy[2*si+2]*lazy[si])%mod;
        }
      lazy[si]=1;
    }
    if(ss>se || ss>qe || se<qs)return 0;
    if(ss>=qs && se<=qe)
    {
        return st[si];
    }
    ll mid=(ss+se)/2;
    return (query(2*si+1,ss,mid,qs,qe)+
    query(2*si+2,mid+1,se,qs,qe))%mod;


}
int main()
{
   ll n,q,type,l,r,val;
   cin>>n>>q;

   for(ll i=0;i<n;i++)
        arr[i]=1;
   buildtree(0,0,n-1);
   while(q--)
   {
       cin>>type;
       if(type==1)
       {
           cin>>l>>r>>val;
           update(0,0,n-1,l,r-1,val);
       }
       else
       {
           cin>>l>>r;
           ll res=query(0,0,n-1,l,r-1);
           cout<<res<<"\n";
       }
   }
}
