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
        int n,a,prev=-1,max_diff=0;
        cin>>n;

        map<int,vector<int>>mp;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            mp[a].push_back(i);
        }

        map<int,set<int>>mp1;

        for(auto p :mp)
       {
           vector<int>v=p.second;
            int ele=p.first;
            prev=-1;
            max_diff=0;
            for(int x:v)
            {

                max_diff=max(max_diff,x-prev);

                prev=x;
            }
            max_diff=max(max_diff,n-prev);

            mp1[max_diff].insert(ele);
        }
        int ans=INT_MAX;
        for(int i=1;i<=n;i++)
        {
            mp1[i].insert(INT_MAX);
        }
        bool f=false;
        for(int i=1;i<=n;i++)
        {
            if(mp1[i].size()==1&& !f)
                cout<<-1<<" ";
            else{
                f=true;
                ans=min(*mp1[i].begin(),ans);
                cout<<ans<<" ";
            }
        }
        cout<<"\n";
    }
}

