#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    map<int,int>mp;
    int x;
    for(int i=0;i<s.size();i++)
    {
        x=s[i]-'0';
        mp[x]++;
    }
    int mx=0;
    for(auto x:mp)
    {
        if(mx<x.second){
            mx=x.second;
        }
    }
    int mn=INT_MAX;
    for(auto x:mp)
    {
      if(x.second==mx)
            mn=min(mn,x.first);
    }
    cout<<mn<<"\n";
}
