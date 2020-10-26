#include<bits/stdc++.h>
using namespace std;


int main()
{
    int m,n;
    string str1,str2;
    cin>>str1>>str2;

    m=str1.size(),n=str2.size(); // converting str2--> str1

    int dp[m+1][n+1];
    for(int i=0;i<=m;i++)
        dp[i][0]=i;

    for(int i=0;i<=n;i++)
        dp[0][i]=i;

    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(str1[i-1]==str2[j-1])
                dp[i][j]=dp[i-1][j-1];
            else
                dp[i][j]=min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]))+1;
        }
    }
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<dp[m][n]<<"\n";
}
