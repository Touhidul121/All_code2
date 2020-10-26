#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin>>s;
    int cnt=0;
    map<char,int>mp;

    for(char ch:s)
    {
        mp[ch]++;
    }
    for(auto x:mp)
    {
        if(x.second&1)cnt++;
    }
    if(cnt==0)
        cout<<"First"<<"\n";
    else if(cnt%2==0)
        cout<<"Second"<<"\n";
    else
        cout<<"First"<<"\n";
}
