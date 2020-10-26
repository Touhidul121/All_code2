#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,a,x;
    cin>>n;
    string s;
    cin>>s;
    vector<int> v1(10);
    vector<ll>diff;
    for(ll i=1;i<=9;i++)
    {

        cin>>a;
        v1[i]=a;
    }

    for(ll i=0;i<n;i++)
    {
        x=s[i]-'0';
        diff.push_back(v1[x]-x);
    }
    for(ll i=0;i<n;i++)
    {
      if(diff[i]>0)
      {
          while(i<n&&diff[i]>=0)
          {

              s[i]=char(v1[(s[i]-'0')]+'0');
              i++;
          }
          break;
      }
    }
    cout<<s<<endl;

}
