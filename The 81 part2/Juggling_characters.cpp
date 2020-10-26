#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<char,int>mp;


        for(int i=0;i<n;i++)
        {
            string x;
            cin>>x;
            for(int j=0;j<x.size();j++)
            {
                mp[x[j]]++;
            }
        }
        bool f=false;

        for(auto x:mp)
        {
            if((x.second%n)!=0)
            {
                f=true;break;
            }
        }
        if(f)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";

    }
}
