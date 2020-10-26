#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);cout.tie(NULL);

 int t;
 cin>>t;
 while(t--)
 {
     ll n,a;
     cin>>n;
     vector<ll>v;

     for(int i=0;i<n;i++){cin>>a ;v.push_back(a);}
     sort(v.begin(),v.end());

     ll ans=max(v[0]*v[1]*v[2]*v[3]*v[4],max(v[n-1]*v[n-2]*v[n-3]*v[n-4]*v[n-5],max(v[0]*v[1]*v[2]*v[3]*v[n-1],v[0]*v[1]*v[n-1]*v[n-2]*v[n-3])));

     cout<<ans<<"\n";

 }
}
