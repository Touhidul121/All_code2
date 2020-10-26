#include<bits/stdc++.h>
using namespace std;
#define inf INT_MAX

int a[50][50],dp[50][50];

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
        cin>>a[i][j];

        for(int i=1;i<=m+1;i++)
            dp[n+1][i]=inf;
        for(int i=1;i<=n+1;i++)
            dp[i][m+1]=inf;
        dp[n+1][m]=dp[n][m+1]=0;
        for(int i=n;i>=1;i--)
        {
            for(int j=m;j>=1;j--)
            {
                dp[i][j]=a[i][j]+min(dp[i+1][j],dp[i][j+1]);
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<"\n";
        }

}
