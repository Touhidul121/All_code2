#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    int ar[n+1];
    for(int i=1;i<=n;i++)
        cin>>ar[i],sum+=ar[i];
    int dp[n+1][sum+1];

    for(int i=0;i<=n;i++)
        dp[i][0]=1;
    for(int i=1;i<=sum;i++)
        dp[0][i]=0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(j<ar[i])
                dp[i][j]=dp[i-1][j];
            else{
                    int need=j-ar[i];
                dp[i][j]=dp[i-1][j]||dp[i-1][need];
            }
        }
    }
    vector<int>v;
    for(int i=1;i<=sum;i++)
    {
        if(dp[n][i]==1)
            v.push_back(i);
    }
    cout<<v.size()<<"\n";
    for(int x:v)
        cout<<x<<" ";
    cout<<"\n";

}
