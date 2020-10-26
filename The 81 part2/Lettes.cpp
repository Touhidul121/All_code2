#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
  ll n,m,a;
 cin>>n>>m;
 vector<ll>pref(n+1);


 for(ll i=0;i<n;i++)
 {
     cin>>a;
     pref[i+1]=pref[i]+a;

 }


 ll loc;

 while(m--)
 {
     cin>>a;
     if(binary_search(pref.begin(),pref.end(),a))
        loc=lower_bound(pref.begin(),pref.end(),a)-pref.begin();
     else
     loc=upper_bound(pref.begin(),pref.end(),a)-pref.begin();

     cout<<loc<<" "<<a-pref[loc-1]<<"\n";

 }
}
