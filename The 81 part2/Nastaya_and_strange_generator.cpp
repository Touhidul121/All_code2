#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n+1];
        map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
            mp[ar[i]]=i;
        }
        int vis[n+1]={0}; // to see vacant places


        vis[mp[1]]=1;// 1 can be always chosen
        bool f=false;
        for(int i=2;i<=n;i++)
        {
            if(mp[i-1]+1>n)
            {
                vis[mp[i]]=1; // if previous element was in the last position we can always start from the vacant places before
            }
            else if(mp[i-1]+1!=mp[i] && vis[mp[i-1]+1]==0)
            {
                f=true;break; // if there is vacant place then current loc should be greater than previous one
            }
            else
            {
                vis[mp[i]]=1;
            }
        }
        if(f)
            cout<<"No"<<"\n";
        else
            cout<<"Yes"<<"\n";
    }
}
