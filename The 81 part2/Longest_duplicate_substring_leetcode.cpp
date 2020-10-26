#include<bits/stdc++.h>
using namespace std;
string ans,s;
int n;
map<string,int>mp;

bool isValid(int mid)
{
    bool f=false;
  for(int i=0;i<=n-(mid-1);i++)
  {
      string x="";
      x=s.substr(i,mid);
      if(mp.find(x)!=mp.end())
      {
          f=true;
          ans=x;
      }
      else
      mp[x]++;
  }
  return f;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>s;
     n=s.size();

    int l=1,h=n;
    while(l<h)
    {

        int mid=(l+h)/2;
        if(isValid(mid))
        {
            l=mid+1;
        }
        else
            h=mid-1;
    }
    cout<<ans<<"\n";
}
