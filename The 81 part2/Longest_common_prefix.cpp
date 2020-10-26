#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1,s2,ans="";
    cin>>s1>>s2;

    int i=0,j=0;
    while(i<s1.size()&&j<s2.size())
    {
        if(s1[i]==s2[j])
        {
            ans+=s1[i];
            i++,j++;
        }
        else break;
    }
    cout<<ans<<"\n";
}
