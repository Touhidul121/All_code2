#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll t;
     cin>>t;
     while(t--)
     {
         ll n,a;
         cin>>n;
         vector<ll>v,v1;
         for(int i=0;i<n;i++)
         {
             cin>>a;
             v.push_back(a);
         }
         sort(v.begin(),v.end());

bool flag=false;
         for(int i=0;i<n;i++)
         {
             if(i+1>=v[i]){
                    flag=true;
                v1.push_back(i+1);
             }
         }
         if(flag)
         cout<<*max_element(v1.begin(),v1.end())+1<<"\n";
         else
            cout<<1<<"\n";
     }
}
