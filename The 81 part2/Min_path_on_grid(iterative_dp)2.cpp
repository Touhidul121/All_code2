#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int dp[n][m];
    for(int j=0;j<m;j++)
        dp[n-1][j]=a[n-1][j];
    for(int i=n-2;i>=0;i--)
    {
        for(int j=0;j<m;j++)
        {
            if(j==0)
                dp[i][j]=a[i][j]+min(dp[i+1][j],dp[i+1][j+1]);
            else if(j==m-1)
                dp[i][j]=a[i][j]+min(dp[i+1][j],dp[i+1][j-1]);
            else
                dp[i][j]=a[i][j]+min(dp[i+1][j],min(dp[i+1][j+1],dp[i+1][j-1]));
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }


}
