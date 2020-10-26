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
        return st[si].sum;
 }

    ll mid=(ss+se)/2;
    ll q1=query(2*si,ss,mid,qs,qe,carry+st[si].prop);
    ll q2=query(2*si+1,mid+1,se,qs,qe,carry+st[si].prop);
     return (q1+q2)*carry;
}
void update(ll si,ll ss,ll se,ll qs,ll qe,ll val)
{
    if(ss>qe || se<qs)
        return;
    if(ss>=qs && se<=qe){
        st[si].sum *=val;
        st[si].prop *= val;
        return;
    }
    ll mid=(ss+se)/2;
    update(2*si,ss,mid,qs,qe,val);
    update(2*si+1,mid+1,se,qs,qe,val);
    st[si].sum= (st[2*si].sum+st[2*si+1].sum)*st[si].prop;
}
int main()
{
        ll t,n,q,v,x,y,z;


        scanf("%lld %lld",&n,&q);
         for(int i=1;i<=n;i++)arr[i]=1;
         for(int i=1;i<mx;i++)
         {
             st[i].sum=1;
             st[i].prop=1;
         }
        build(1,1,n);
        for(ll k=0;k<q;k++)
        {
            scanf("%lld",&x);
            if(x==1)
            {
                scanf("%lld %lld %lld",&y,&z,&v);

                update(1,1,n,y+1,z,v);

            }
            else if(x==2)
            {
                scanf("%lld %lld",&y,&z);
                ll ans=query(1,1,n,y+1,z,0);
                printf("%lld\n",ans);
            }
        }

    return 0;
}


