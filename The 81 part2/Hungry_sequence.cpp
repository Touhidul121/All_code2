#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll a[10000005];
vector<ll>v;
void sieve(int n)
{

  for(int i=4;i<=n;i+=2)
  {
      a[i]=1;
  }

  for(int i=3;i<=sqrt(n);i+=2)
  {
      if(a[i]==0){
      for(int j=i*i;j<=n;j+=i)
      {
        a[j]=1;
      }
      }
  }
  for(int i=2;i<=n;i++)
  {
      if(a[i]==0)
      {
          v.push_back(i);
      }
  }
}




int main()
{
 sieve(10000000);
 int n;
 cin>>n;
 for(int i=0;i<n;i++)
 {
     cout<<v[i]<<" ";
 }
 cout<<endl;
}
