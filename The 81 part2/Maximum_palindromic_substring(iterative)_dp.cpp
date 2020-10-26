#include<bits/stdc++.h>
using namespace std;

int dp[100][100];
char a[100];
int main()
{
    int n;
    cin>>n;
  for(int i=1;i<=n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<=n;i++)
    dp[0][i]=dp[1][i]=1;
  for(int i=2;i<=n;i++)
  {
      for(int j=i;j<=n;j++)
      {
          if(a[j]==a[j-i+1] && dp[i-2][j-1]==1)
            dp[i][j]=1;
          else
            dp[i][j]=0;
      }
  }
  for(int i=0;i<=n;i++)
  {
      for(int j=0;j<=n;j++)
      {
          cout<<dp[i][j]<<" ";
      }
      cout<<"\n";
  }
  int length=0,ind=0;
  bool f=false;
  for(int i=n;i>=0;i--)
  {
      for(int j=n;j>=0;j--)
      {
        if(dp[i][j]==1)
        {
            f=true;
            length=i;
            ind=j;
            break;
        }
      }
      if(f)
        break;
  }
  cout<<"\n----Palindromic substring-------\n";
  for(int i=ind-length+1;i<=ind;i++)
    cout<<a[i];
  cout<<"\n";
  cout<<"Length of maximum palindromic substring = "<<length<<"\n";
}
