#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;


     if(s==t)
        cout<<-1<<"\n";
     else
        cout<<max(s.size(),t.size())<<"\n";

}
