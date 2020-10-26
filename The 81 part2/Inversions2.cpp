#include<bits/stdc++.h>
using namespace std;
int a[100001];
int st[4*100001];

void buildtree(int si,int ss,int se)
{
    if(ss==se)
    {
        st[si]=1;
        return;
    }
    int mid=(ss+se)/2;
    buildtree(2*si,ss,mid);
    buildtree(2*si+1,mid+1,se);
    st[si]=st[2*si]+st[2*si+1];
}

void update(int si,int ss,int se,int qi)
{
    if(ss==se)
    {
        st[si]=0;
        return;
    }
    int mid=(ss+se)/2;
    if(qi<=mid)
        update(2*si,ss,mid,qi);
    else
        update(2*si+1,mid+1,se,qi);

    st[si]=st[2*si]+st[2*si+1];

}
int query(int si, int ss, int se, int k) {
    if (k > st[si])
        return -1;
    if (ss == se)
        return ss;
    int mid = (ss + se) / 2;
    if (st[si*2]>= k)
        return query(si*2, ss, mid, k);
    else
        return query(si*2+1, mid+1, se, k - st[si*2]);
}

int main()
{
  int n;
  cin>>n;

  for(int i=1;i<=n;i++)
        cin>>a[i];
        buildtree(1,1,n);
  int x=n,r;
  vector<int>v;
  for(int i=n;i>=1;i--)
  {

    r=query(1,1,n,x-a[i]);
    v.push_back(r);
    update(1,1,n,r);
    x--;
  }

    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
        cout<<"\n";
}



