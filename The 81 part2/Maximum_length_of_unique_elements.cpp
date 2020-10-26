#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,a;
    cin>>n;
    vector<int>v;
    map<int,int>mp;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    int j=0,ans=0;

    for(int i=0;i<n;i++)
    {
        while(j<n && mp[v[j]]<1)
        {
            mp[v[j]]++;
            j++;
        }

        ans=max(j-i,ans);
        mp[v[i]]--;
    }
    cout<<ans<<"\n";

}

