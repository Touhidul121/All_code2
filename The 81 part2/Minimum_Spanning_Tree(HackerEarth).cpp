#include<bits/stdc++.h>
using namespace std;

struct edge
{
    int a;
    int b;
    int w;
};
struct edge ar[100000];
int par[10001];

bool comp(edge a,edge b)
{
    if(a.w<b.w)
        return true;
    else
        return false;
}

int find(int a)
{
    if(par[a]<0)
        return a;
    return par[a]=find(par[a]);
}
void merge(int a,int b)
{
    par[a]=b;
}
int main()
{
  int n,m,a,b,w,sum=0;
  cin>>n>>m;
  for(int i=1;i<=n;i++)
    par[i]=-1;
  for(int i=0;i<m;i++)
  {
      cin>>ar[i].a>>ar[i].b>>ar[i].w;
  }

  sort(ar,ar+m,comp);

  for(int i=0;i<m;i++)
  {
      a=find(ar[i].a);
      b=find(ar[i].b);
      if(a!=b)
      {
          sum+=ar[i].w;
          merge(a,b);
      }
  }
  cout<<sum<<"\n";
}
