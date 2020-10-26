#include<bits/stdc++.h>
using namespace std;

#define maxN 30001
int ar[maxN];
vector<int>st[4*maxN];

void merge(vector<int> &a, vector<int> &b,vector<int> &c)
{
    int i=0,j=0;
    while(i<a.size()&&j<b.size())
    {
        if(a[i]<b[j])
            c.push_back(a[i]),i++;
        else
            c.push_back(b[j]),j++;
    }
    while(i<a.size())c.push_back(a[i]),i++;
    while(j<b.size())c.push_back(b[j]),j++;
}

void buildtree(int si,int ss,int se)
{
    if(ss==se)
    {
        st[si].push_back(ar[ss]);
        return;
    }
    int mid=(ss+se)/2;
    buildtree(2*si,ss,mid);
    buildtree(2*si+1,mid+1,se);

    merge(st[2*si],st[2*si+1],st[si]);
}

int query(int si,int ss,int se,int qs,int qe,int k)
{
    if(qs>qe)return 0;
    if(qs==ss &&qe==se)
        return st[si].end()-upper_bound(st[si].begin(),st[si].end(),k);
    int mid=(ss+se)/2;
    return query(2*si,ss,mid,qs,min(qe,mid),k)+query(2*si+1,mid+1,se,max(qs,mid+1),qe,k);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,l,r,k,q;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>ar[i];
    buildtree(1,1,n);
    cin>>q;
    while(q--)
    {
        cin>>l>>r>>k;
        cout<<query(1,1,n,l,r,k)<<"\n";
    }
}
