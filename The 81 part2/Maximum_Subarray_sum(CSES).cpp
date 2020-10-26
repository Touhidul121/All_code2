#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n,a;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
      cin>>a;
      v.push_back(a);
  }
  ll mx=INT_MIN;

  ll previous_best=0;

  for(int i=0;i<n;i++)
  {
      previous_best+=v[i];
      if(previous_best<v[i])
        previous_best=v[i];
      mx=max(previous_best,mx);
  }
  cout<<mx<<"\n";
}
