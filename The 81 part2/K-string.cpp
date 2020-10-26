#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,i,count=0;
    string s,ans;
    char c;
    cin>>k>>s;
    map<char,int> mp;
vector<int> v;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    for(auto x:mp)
    {

        v.push_back(x.second);
    }
    for(int i=0;i<v.size();i++)
        if(v[i]%k==0)
        count++;
    if(count<v.size())
    cout<<-1<<endl;
    else
    {

        for(auto x:mp)
        {
            c=x.first;
            ans+=string(x.second/k,c);
            i--;
        }

       for(int i=0;i<k;i++)
           cout<<ans;
    }

}
