#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
  ll n,a;
  cin>>n;
  vector<ll>v,res;
  priority_queue<ll>p;
  ll r;
  for(int i=0;i<n;i++)
  {
      cin>>a;
      v.push_back(a);
  }
  p.push(v[0]);
  res.push_back(v[0]);
  for(int i=1;i<n;i++)
  {
      r=p.top();
      res.push_back(v[i]+r);
      p.push(v[i]+r);
  }
  for(auto x:res)
    cout<<x<<" ";
  cout<<'\n';
}
