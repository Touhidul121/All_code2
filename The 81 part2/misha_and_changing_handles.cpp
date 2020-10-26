#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    map<string,string>mp1;
set<string>st;
    string s1,s2;
    while(t--)
    {
      cin>>s1>>s2;
      mp1[s1]=s2;


    }
    string r;
for(auto x:mp1){
bool flag=false;
        for(auto y:mp1)
        {
       if(y.first==x.second){
            flag=true;
              r=mp1[y.first];
              mp1.erase(y.first);
       }

        }
        if(flag){
    mp1[x.first]=r;

        }
}
cout<<mp1.size()<<"\n";
    for(auto x:mp1)
        cout<<x.first<<" "<<x.second<<"\n";
}
