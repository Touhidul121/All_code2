#include<bits/stdc++.h>
using namespace std;

int Longest_Palindromic_Subsequence(string str1,string str2)
{
    int n=str1.size();
    int dp[n+1][n+1];

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;continue;
            }
            if(str1[i-1]==str2[j-1])
                dp[i][j]=1+dp[i-1][j-1];
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[n][n];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    string str1,str2;
    cin>>str1;
    str2=str1;
    reverse(str2.begin(),str2.end());
    cout<<Longest_Palindromic_Subsequence(str1,str2)<<"\n";
}
