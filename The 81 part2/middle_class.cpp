#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
  ll t1;
  cin>>t1;
  while(t1--)
  {
      ll n1,x1,count1=0,a1;
      cin>>n1>>x1;
      vector<int>v;
      vector<double>v1(n1+5);
      double y1;

      for(int i=0;i<n1;i++)
      {
        cin>>a1;
        v.push_back(a1);
      }
sort(v.rbegin(),v.rend());

for(int i=0;i<n1;i++)
{
    v1[i+1]=v1[i]+v[i];
}

      for(int i=1;i<n1+1;i++)
      {
          y1=(v1[i]/(i*1.0));

          if(y1>=x1)
          {
              count1++;
          }
      }
      cout<<count1<<endl;
  }
}
