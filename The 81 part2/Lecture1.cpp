#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    map<string,string>mp;
    string a,b;

    for(int i=0;i<m;i++)
    {
      cin>>a>>b;
      if(a.size()<=b.size())
            mp[a]=a;
      else
        mp[a]=b;
    }
    for(int i=0;i<n;i++)
    {
        cin>>a;
        cout<<mp[a]<<" ";
    }
    cout<<"\n";
}
