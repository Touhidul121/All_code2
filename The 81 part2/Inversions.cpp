#include<bits/stdc++.h>
using namespace std;
#define maxN 100001
int ar[maxN],st[4*maxN];

void  update(int si,int ss,int se,int qi)
{
    if(ss==se)
    {
        st[si]=1;
        return;
    }
    int mid=(ss+se)/2;
    if(qi<=mid)
        update(2*si,ss,mid,qi);
    else
        update(2*si+1,mid+1,se,qi);
    st[si]=st[2*si]+st[2*si+1];
}

int query(int si,int ss,int se,int qs,int qe)
{
    if(qs>qe)return 0;
    if(qs==ss && qe==se)
        return st[si];
    int mid=(ss+se)/2;
    return query(2*si,ss,mid,qs,min(qe,mid))+query(2*si+1,mid+1,se,max(qs,mid+1),qe);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n;

    for(int i=1;i<=n;i++)
        cin>>ar[i];
    for(int i=1;i<=n;i++)
    {
        x=ar[i];
        update(1,1,n,x);
        cout<<query(1,1,n,x,n)-1<<" ";
    }
}
