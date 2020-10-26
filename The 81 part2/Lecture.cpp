#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    map<string,string>mp;
    string s,p;

    for(int i=0;i<m;i++)
    {
        cin>>s>>p;
        if(s.size()<p.size())
        mp[s]=s;
        else if(p.size()<s.size())
        {
          mp[s]=p;
        }
        else
            mp[s]=s;
    }

    for(int i=0;i<n;i++)
    {
        cin>>s;
        cout<<mp[s]<<" ";
    }
    cout<<"\n";
}
