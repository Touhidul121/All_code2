#include<bits/stdc++.h>
using namespace std;

string Longest_Palindromic_Substring(string s)
{

    int n=s.size();
    int dp[n+1][n+1];
    memset(dp,0,sizeof(dp));

    for(int i=0;i<=n;i++)
        dp[0][i]=dp[1][i]=1;

    for(int i=2;i<=n;i++) // dp[i][j] means if there is a substring of length i that ends at index j
    {
        for(int j=i;j<=n;j++)
        {
            if(s[j-1]==s[j-i] && dp[i-2][j-1]==1)
                dp[i][j]=1;
            else
                dp[i][j]=0;
        }
    }
    int ind=0,length=0;
    bool f=false;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(dp[i][j]==1)
            {
                length=i;
                ind=j;
                 break;
            }
        }

    }
    string ans="";
    if(length==1)
        ans+=s[0];

    else{
    int starting_index=ind-length;
    ans+=s.substr(starting_index,length);
        }

    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    string s;
    cin>>s;
    string ans=Longest_Palindromic_Substring(s);
    cout<<ans<<"\n";
}
