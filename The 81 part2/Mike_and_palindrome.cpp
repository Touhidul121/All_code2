#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int cnt=0,l=s.size();
    for(int i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-1-i])
            cnt++;
    }
    if((l&1)&&cnt<=1)
        cout<<"YES"<<"\n";
    else if(cnt==1)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
}
