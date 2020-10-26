#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a[300][300];
ll dp[300][300];
ll k;

ll solve(int i,int j)
{
    if(a[i][j]==0 || i>k-1)return 0; // a[i][j]==0 means we are out of boundary, i>k-1 means we are below the last row
    if(dp[i][j]!=-1)return dp[i][j];

    ll r1=0,r2=0;
    r1=a[i][j]+solve(i+1,j);
    r2=a[i][j]+solve(i+1,j+1);

    return dp[i][j]=max(r1,r2);
}
int main()
{
  int t;
  cin>>t;
  for(int tc=1;tc<=t;tc++)
  {
      memset(dp,-1,sizeof(dp));
      memset(a,0,sizeof(a));
      ll n;
      cin>>n;
      k=2*n-1;

      for(int i=0;i<n;i++)
      {
          for(int j=0;j<=i;j++)
          {
              cin>>a[i][j];
          }
      }

      ll x=1;
      for(int i=n;i<k;i++)
      {
          for(int j=x;j<n;j++)
          {
              cin>>a[i][j];
          }
          x++;
      }

      cout<<"Case "<<tc<<": ";
      cout<<solve(0,0)<<"\n";
  }
}
