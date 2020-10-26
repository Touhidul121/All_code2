#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a,b;
  cin>>a>>b;
  int n=__gcd(a,b);

  vector<int>v;
  for(int i=1;i*i<=n;i++)
  {
      if(n%i==0)
      {
          if(i==n/i)
            v.push_back(i);
          else
          {
              v.push_back(i);
              v.push_back(n/i);
          }
      }
  }
  sort(v.begin(),v.end());
  int q,l,h,ans;
  cin>>q;
  bool f=false;
  for(int i=1;i<=q;i++)
  {
      cin>>l>>h;
      f=false;
      for(int j=v.size()-1;j>=0;j--)
      {
          if(v[j]>=l && v[j]<=h)
          {
              f=true;
              ans=v[j];
              break;
          }
      }
      if(f)
        cout<<ans<<"\n";
      else
        cout<<-1<<"\n";
  }
}
