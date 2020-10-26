#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];

	    int dp[n];
        dp[0]=0;
	    for(int i=1;i<n;i++)
	    {
	        dp[i]=INT_MAX;
	        for(int j=0;j<i;j++)
	        {
	           if(i<=j+arr[j] && dp[j]!=INT_MAX)
	           {
	               dp[i]=min(dp[i],dp[j]+1);break;
	              // break;
	           }
	        }
	    }
	    if(dp[n-1]==INT_MAX)cout<< -1;
	    else cout<<dp[n-1];
	    cout<<"\n";
	}
	return 0;
}
