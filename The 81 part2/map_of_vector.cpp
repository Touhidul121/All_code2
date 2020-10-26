#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<string,vector<string>>mp;
    int n;
    cin>>n;
    while(n--)
    {
        string s,t;
        cin>>s;
        t=s;
        sort(t.begin(),t.end());
        mp[t].push_back(s);
    }
    for(auto x:mp)
    {
        vector<string>s=x.second;
        for(string r:s)
            cout<<r<<" ";
        cout<<"\n";
    }
}

