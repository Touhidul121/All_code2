#include<bits/stdc++.h>
using namespace std;

int n;
vector<string>v;
void solve(string s,int pos,string ans)
{
    if(pos==n)
    {
     v.push_back(ans);return;
    }


    solve(s,pos+1,ans+'+'+s[pos]);
    solve(s,pos+1,ans+s[pos]);


}
int main()
{
    string s;
    cin>>s;
    n=s.size();
    string x="";
    x+=s[0];
    solve(s,1,x);

    long long ans=0;
    for(string s:v)
    {
        string x="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='+')
            {
                ans+=stoll(x);x.clear();
            }
            else
                x+=s[i];
        }
        ans+=stoll(x);
        x.clear();
    }
    cout<<ans<<"\n";
}
