#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int dp[2500][2500],i,j,p,n,k,ans;
int main()
{

    cin>>k>>n;

    dp[0][1]=1;
    for( i=1;i<=n;i++)
    {
        for( j=1;j<=k;j++)
        {
            for( p=j;p<=k;p+=j)
            {
                dp[i][p]=(dp[i][p]%mod+dp[i-1][j]%mod);
            }
        }
    }

    for(int j=1;j<=k;j++)
        ans=(ans%mod+dp[n][j]%mod);
    cout<<ans%mod<<"\n";
}
