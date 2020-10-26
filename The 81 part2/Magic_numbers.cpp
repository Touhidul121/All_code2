#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    if(n==2)
    {
        if(s[0]=='1'&s[i]=='4')||s[0]=='1'&&s[1]=='1')
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        return 0;

    }
    for(int i=0;i<s.size();i++)
    {
       if(s[i]!=1&&s[i]!='4')
            flag++;

    }
    if(flag)
    {
        for(int i=0;i<n-2;i++)
        {
            if(s[i]=='4'&&s[i+1]=='4'&&s[i+2]=='4')
                flag1++;
        }
    }
    if(flag1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

}
