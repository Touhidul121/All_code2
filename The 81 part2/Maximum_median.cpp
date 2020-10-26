#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<ll>v;
ll n,k;
bool isvalid(ll x)
{
    ll moves=0;
    for(int i=n/2;i<n;i++)
    {
        if(x-v[i]>=0)
            moves+=(x-v[i]);
    }
    if(moves<=k)return true;
    else return false;
}
int main()
{

   cin>>n>>k;
   v.resize(n);
   for(int i=0;i<n;i++)
        cin>>v[i];

   sort(v.begin(),v.end());

   ll l=1,h=1e10,ans=1;

   while(l<=h)
   {
       ll mid=(l+h)/2;
       if(isvalid(mid))
       {
           ans=mid;l=mid+1;
       }
       else
        h=mid-1;
   }
   cout<<ans<<"\n";
}
