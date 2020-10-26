#include<bits/stdc++.h>
using namespace std;

struct edge
{
    int a,b;
};
struct edge ar[200005];
bool comp(edge x,edge y)
{
  if(x.b<y.b)return true;
  else if(x.b==y.b)
    return x.a<y.a;
  else
  return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i].a>>ar[i].b;
    }
    sort(ar,ar+n,comp);
    int cnt=0,l=0;


    for(int i=0;i<n;i++)
    {
        if(ar[i].a>=l)
            cnt++ , l=ar[i].b;

    }
    cout<<cnt<<"\n";

}

