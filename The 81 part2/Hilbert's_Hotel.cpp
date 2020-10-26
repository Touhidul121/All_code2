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
        int n,a,x;
        cin>>n;
        vector<int>vis(n,0),v;

        bool f1=false;
        for(int i=0;i<n;i++)cin>>a, v.push_back(a);
        for(int i=0;i<n;i++)
        {
          x=(v[i]%n+n)%n;
          x=(x+i)%n;
          vis[x]++;
        }
        for(int i=0;i<n;i++)
        {
         if(vis[i]>1)
         {
             f1=true;break;
         }
        }
        if(f1)cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
}
