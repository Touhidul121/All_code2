#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    ll n,m=0;
    cin>>n;
    ll a[n];

    for(int i=0;i<n;i++)
    {
     cin>>a[i];
     m=max(m,a[i]);
    }
    ll vis[m+5];
    memset(vis,0,sizeof(vis));
    ll i=0,j=n-1;
    string s;
    ll first=min(a[i],a[j]);
if(first==a[i]){
        i++;
        s+='L';
}
    else{
            s+='R';
        j--;
    }
cout<<first<<endl;
ll x;

    while(i<=j)
    {

      x=min(a[i],a[j]);
      if(first<x)
      {
          if(x==a[i]&&a[i]!=a[j])
          {
              s+='L';
              i++;
          }
          else if(x==a[j]&&a[i]!=a[j])
          {
              s+='R';
              j--;
          }
          else
            break;
      }


    first=a[i];
    }
    cout<<s<<"\n";
}
