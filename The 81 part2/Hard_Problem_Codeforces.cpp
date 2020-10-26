//the code is copied from waqar Ahmed's github(codeNcode's teacher)...try to understand it later
#include<bits/stdc++.h>
using namespace std;
const long long inf=1e18;
typedef long long ll;
int main()
{
  ll n;
  cin>>n;
  ll a[n];
  for(int i=0;i<n;i++)cin>>a[i];

  string s[n],r[n];

  ll dp[n][2];
  for(int i=0;i<n;i++)
  {
      cin>>s[i];
      r[i]=s[i];
      reverse(r[i].begin(),r[i].end());
      dp[i][0]=inf; dp[i][1]=inf;
  }

  dp[0][0]=0;
  dp[0][1]=a[0];

  for(int i=1;i<n;i++)
  {
      //won't reverse
      if(s[i-1]<=s[i])
        dp[i][0]=dp[i-1][0];

      if(s[i]>=r[i-1])
        dp[i][0]=min(dp[i][0],dp[i-1][1]);

      // reverse
      if(r[i]>=s[i-1])
        dp[i][1]=dp[i-1][0]+a[i];

      if(r[i]>=r[i-1])
        dp[i][1]=min(dp[i][1],dp[i-1][1]+a[i]);
  }
  ll x=min(dp[n-1][0],dp[n-1][1]);

  if(x==inf)cout<<-1<<"\n";
  else cout<<x<<"\n";
  return 0;
}
