#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define maxN 100001
const long long mod=1e9+7;
const long long inf=LLONG_MAX;
vector<ll> st(4*maxN,1),operation(4*maxN,1);
void buildtree(int si,int ss,int se)
{
    if(ss==se)
    {
        st[si]=1;return;
    }
    int mid=(ss+se)/2;
    buildtree(2*si,ss,mid);
    buildtree(2*si+1,mid+1,se);
    st[si]=st[2*si]+st[2*si+1];
}
void add(int si,int ss,int se,int qs,int qe,int val)
{
    if(qs>se || qe<ss)
        return;
    if(ss>=qs && se<=qe)
        {
            operation[si]=(operation[si]*val)%mod;
            st[si]=(st[si]*val)%mod;
            return;
        }
    int mid=(ss+se)/2;
    add(2*si,ss,mid,qs,qe,val);
    add(2*si+1,mid+1,se,qs,qe,val);
    ll r=(st[2*si]+st[2*si+1])%mod;
    st[si]=(r*operation[si])%mod;
}

ll get(int si,int ss,int se,int qs,int qe)
{
    if(qs>se || qe<ss)
        return 0;
    if(ss>=qs && se<=qe)
        return st[si];
    int mid=(ss+se)/2;

    ll m1=get(2*si,ss,mid,qs,qe);
    ll m2=get(2*si+1,mid+1,se,qs,qe);
    ll ans=(m1+m2)%mod;
    return (ans*operation[si])%mod;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,q,l,r,v,type;
    cin>>n>>q;
    buildtree(1,1,n);
    while(q--)
    {
        cin>>type;
        if(type==1)
        {
            cin>>l>>r>>v;
            add(1,1,n,l+1,r,v);
        }
        else
        {
            cin>>l>>r;
            ll res=get(1,1,n,l+1,r);
            cout<<res<<"\n";
        }
    }
}

