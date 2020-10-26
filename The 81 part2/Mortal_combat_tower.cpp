#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int dp[2][200001];
vector<int>v;
int solve(int n,int pos,bool friend1)
{
    if(pos>=n)
        return 0;
    if(dp[friend1][pos]!=-1)return dp[friend1][pos];
    int ans1=INT_MAX,ans2=INT_MAX;
    if(friend1==true)
    {
        ans1=v[pos]+solve(n,pos+1,false);
        if(pos+1<n)
        ans1=min(ans1,v[pos]+v[pos+1]+solve(n,pos+2,false));
    }
    else
    {
        ans2=solve(n,pos+1,true);
        ans2=min(ans2,solve(n,pos+2,true));
    }

    return dp[friend1][pos]=min(ans1,ans2);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int a,n;
    cin>>n;
    //vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a , v.push_back(a);
    }
    memset(dp,-1,sizeof(dp));
    cout<<solve(n,0,true)<<"\n";
    v.clear();
  }
}
