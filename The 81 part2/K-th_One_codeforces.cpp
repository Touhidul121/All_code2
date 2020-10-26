#include<bits/stdc++.h>
using namespace std;
int a[100001];
pair<int,int> st[4*100001];

void buildtree(int si,int ss,int se)
{
    if(ss==se)
    {
        if(a[ss]==1)
            st[si]={1,ss};
        else
            st[si]={0,ss};
        return;
    }
    int mid=(ss+se)/2;
    buildtree(2*si,ss,mid);
    buildtree(2*si+1,mid+1,se);
    st[si].first=st[2*si].first+st[2*si+1].first;
}

void update(int si,int ss,int se,int qi)
{
    if(ss==se)
    {
        if(a[ss]==1)
        {

            st[si].first=st[si].first-1;
            a[ss]=0;
        }
        else{
                st[si].first++;
            a[ss]=1;
        st[si].second=ss;
        }
        return;
    }
    int mid=(ss+se)/2;
    if(qi<=mid)
        update(2*si,ss,mid,qi);
    else
        update(2*si+1,mid+1,se,qi);

    st[si].first=st[2*si].first+st[2*si+1].first;

}
int query(int si, int ss, int se, int k) {
    if (k > st[si].first)
        return -1;
    if (ss == se)
        return ss;
    int mid = (ss + se) / 2;
    if (st[si*2].first >= k)
        return query(si*2, ss, mid, k);
    else
        return query(si*2+1, mid+1, se, k - st[si*2].first);
}

int main()
{
  int n,m,l,r,t;
  cin>>n>>m;
  for(int i=1;i<=n;i++)
        cin>>a[i];
        buildtree(1,1,n);
  for(int i=1;i<=m;i++)
  {
      cin>>t>>l;
      if(t==1){
      update(1,1,n,l+1);
      }
      else
      {
         int res=query(1,1,n,l+1);
          cout<<res-1<<"\n";
      }


  }
}

