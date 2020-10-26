#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,c;
    cin>>s;
    int n=s.size(),count=0,count1=0;
    bool a=true;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
            count++;
            else
                count1++;
    }
    if(count==n||count1==n)
    {
        s.pop_back();
        cout<<s<<endl;
    }

    else{

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0'&&a)
        {
            a=false;
        }
        else
            cout<<s[i];
    }
    cout<<endl;
    }
}
