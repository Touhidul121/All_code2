#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int dp[2100][2100];

int getans(int n,int k,int cur_val)
{
    if(k<=0)return 1;
    if(dp[cur_val][k]!=-1)return dp[cur_val][k];
    int ans=0;

    for(int j=cur_val;j<=n;j+=cur_val)
    {
        ans=(ans+getans(n,k-1,j))%mod; // here k denotes remaining positions to fill
                                       // we will use multiples because according to question previous val will divide new val
    }
    return dp[cur_val][k]=ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;
    cin>>n>>k;
    memset(dp,-1,sizeof(dp));
    int ans=getans(n,k,1);
    cout<<ans<<"\n";
}
