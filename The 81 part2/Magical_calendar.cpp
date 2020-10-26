#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     ll n,r,k;
     cin>>n>>r;
     if(n>r)
            cout<<(r*(r+1))/2<<"\n";
     else
     {
         k=n-1;
         cout<<(k*(k+1))/2+1<<"\n";
     }
    }
}
