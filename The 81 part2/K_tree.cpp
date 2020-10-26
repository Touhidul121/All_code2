#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

typedef long long ll;

int d,k,n;
int dp[101][3];

int getsum(int sum,bool f)
{
    if(sum==n && f==true)
    return 1;
    if(sum>=n)return 0;

    if(dp[sum][f]!=-1)return dp[sum][f];
    int ans=0;
    for(int i=1;i<=k;i++)
    {

    ans=(ans+getsum(sum+i,f==true||i>=d?1:0))%mod;
    }
    return dp[sum][f]=ans;
}

int main()
{


    cin>>n>>k>>d;
    memset(dp,-1,sizeof(dp));

    cout<<getsum(0,0)<<"\n";



}

