 #include<bits/stdc++.h>
 using namespace std;
 typedef long long ll;
 int main()
 {
     vector<ll>coins;ll amount;
     ll n,a;
     cin>>n>>amount;
     for(ll i=0;i<n;i++)
        cin>>a ,coins.push_back(a);

        ll inf=99999999999;
        ll dp[amount+1],ans=inf;
        dp[0]=0;
        for(ll i=1;i<=amount;i++)
        {
            ans=inf;
            for(ll j=0;j<coins.size();j++)
            {
                if(i-coins[j]>=0)
                ans=min(ans,dp[i-coins[j]]);
            }
            if(ans!=inf)
            {
                ans+=1;
            }
                dp[i]=ans;

        }
        if(dp[amount]==inf)
            cout<<-1<<"\n";
        else
            cout<<dp[amount]<<"\n";
    }

