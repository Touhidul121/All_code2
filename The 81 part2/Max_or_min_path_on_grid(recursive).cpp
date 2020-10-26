#include<bits/stdc++.h>
using namespace std;
#define inf INT_MAX

int a[50][50],dp[50][50],r,c;
int call(int i,int j)
{
    if((i>=1 && i<r )&&(j>=1&&j<c))
    {
        if(i==r || j==c){
            return a[i][j];

        }
        if(dp[i][j]!=-1){
            return dp[i][j];

        }
        return dp[i][j]=a[i][j]+min(call(i,j+1),call(i+1,j));

    }
}
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
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                dp[i][j]=-1;
            }
        }
        for(int i=1;i<=n+1;i++)
        {
            for(int j=1;j<=m+1;j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<"\n";
        }
        r=n+1,c=m+1;
        call(n,m);
            for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<"\n";
}        }

