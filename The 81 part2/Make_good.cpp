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
     ll n,sum=0,xor_sum=0,a;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>a;
         sum+=a;
         xor_sum=xor_sum^a;
     }
     if(2*xor_sum==sum)
        cout<<0<<"\n";
     else
     {
         cout<<3<<"\n";
         cout<<xor_sum<<" "<<0<<" "<<sum+xor_sum<<"\n";
     }
     //cout<<(0^0^16)<<"\n";
    }
}
