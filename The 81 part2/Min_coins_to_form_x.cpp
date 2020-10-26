// here the values of coins are 1,3,4
#include<bits/stdc++.h>
using namespace std;

int coin(int x)
{
    int dp[x+1];
    dp[0]=0;
    dp[2]=2;
    dp[1]=dp[3]=dp[4]=1;
    for(int i=5;i<=x;i++){
        dp[i]=min(dp[i-1]+1,min(dp[i-3]+1,dp[i-4]+1));

    }
    return dp[x];
}
int main()
{
    int x;
    cin>>x;
    cout<<coin(x)<<'\n';
}
