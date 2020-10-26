#include<bits/stdc++.h>
using namespace std;

#define maxN 100001
typedef long long ll;
const long long inf=LLONG_MAX;
ll st[4*maxN];
ll lazy[4*maxN];

void update(int si,int ss,int se,int qs,int qe,int val)
{
    if(lazy[si]!=0)
    {
        st[si]+=(se-ss+1)*lazy[si];
        if(ss!=se)
        {
            lazy[2*si]+=lazy[si];
            lazy[2*si+1]+=lazy[si];
        }
        lazy[si]=0;return;
    }
    if(qs>se || qe<ss)return;
    if(ss>=qs && se<=qe)
    {
        st[si]+=(se-ss+1)*val;

        if(ss!=se)
        {
            lazy[2*si]+=val;
            lazy[2*si+1]+=val;
        }
        return;
    }
    int mid=(ss+se)/2;
    update(2*si,ss,mid,qs,qe,val);
    update(2*si+1,mid+1,se,qs,qe,val);

    st[si]=min(st[2*si],st[2*si+1]);
}

ll query(int si,int ss,int se,int qs,int qe)
{
   if(lazy[si]!=0)
    {
        st[si]+=(se-ss+1)*lazy[si];
        if(ss!=se)
        {
            lazy[2*si]+=lazy[si];
            lazy[2*si+1]+=lazy[si];
        }
        lazy[si]=0;
    }
    if(qs>se || qe<ss) return inf;

    if(ss>=qs && se<=qe)return st[si];

    int mid=(ss+se)/2;
    ll l=query(2*si,ss,mid,qs,qe);
    ll r=query(2*si+1,mid+1,se,qs,qe);

    return min(l,r);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,q,l,r,v,type;
    cin>>n>>q;
    while(q--)
    {
        cin>>type;
        if(type==1)
        {
            cin>>l>>r>>v;
            update(1,1,n,l+1,r,v);
        }
        else
        {
            cin>>l>>r;
            ll res=query(1,1,n,l+1,r);
            cout<<res<<"\n";
        }
    }
}

