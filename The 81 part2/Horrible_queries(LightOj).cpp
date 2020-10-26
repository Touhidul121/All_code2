#include<bits/stdc++.h>
#define mx 100005
#define ll long long int
using namespace std;
ll arr[mx];

struct node{
        ll  prop,sum;
}st[mx*3];
void build(ll si,ll ss,ll se)
{
    if(ss==se){
        st[si].sum=arr[ss];
        return;
    }

    ll mid=(ss+se)/2;
    build(2*si,ss,mid);
    build(2*si+1,mid+1,se);
    st[si].sum= st[2*si].sum+st[2*si+1].sum;
}
ll query(ll si,ll ss,ll se,ll qs, ll qe,ll carry=0)
{
    if(ss>qe || se<qs){
        return 0;
    }
    if(ss>=qs && se<=qe){
        return st[si].sum + carry *(se-ss+1);
 }

    ll mid=(ss+se)/2;
    ll q1=query(2*si,ss,mid,qs,qe,carry+st[si].prop);
    ll q2=query(2*si+1,mid+1,se,qs,qe,carry+st[si].prop);
     return q1+q2;
}
void update(ll si,ll ss,ll se,ll qs,ll qe,ll val)
{
    if(ss>qe || se<qs)
        return;
    if(ss>=qs && se<=qe){
        st[si].sum += ((se-ss+1)*val);
        st[si].prop += val;
        return;
    }
    ll mid=(ss+se)/2;
    update(2*si,ss,mid,qs,qe,val);
    update(2*si+1,mid+1,se,qs,qe,val);
    st[si].sum= st[2*si].sum+st[2*si+1].sum+(se-ss+1)*st[si].prop;
}
int main()
{
    ll t,n,q,v,x,y,z;
    scanf("%lld",&t);
    for(ll i=1;i<=t;i++)
    {
        memset(arr,0,sizeof(arr));
        memset(st,0,sizeof(st));
        printf("Case %d:\n",i);
        scanf("%lld %lld",&n,&q);

        build(1,1,n);
        for(ll k=0;k<q;k++)
        {
            scanf("%lld",&x);
            if(x==0)
            {
                scanf("%lld %lld %lld",&y,&z,&v);

                update(1,1,n,y+1,z+1,v);

            }
            else if(x==1)
            {
                scanf("%lld %lld",&y,&z);
                ll ans=query(1,1,n,y+1,z+1,0);
                printf("%lld\n",ans);
            }
        }
    }
    return 0;
}

