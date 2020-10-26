#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
int x,n;
n=s.size();
    if(s[0]!='-')
        cout<<s<<endl;
    else
    {
        x=min(s[n-1]-'0',s[n-2]-'0');

        s.pop_back();
        s.pop_back();
if(x==0&&s.size()==1)
    cout<<0<<endl;
else
       cout<<s<<x<<endl;
    }
}
