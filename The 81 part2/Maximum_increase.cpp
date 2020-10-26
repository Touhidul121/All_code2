#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,m=0,count=1;
    cin>>n;
    ll a[n];

    for(ll i=0;i<n;i++)
        cin>>a[i];

        if(n==1)
            cout<<1<<endl;
        else{
    for(ll i=0;i<n-1;i++)
    {

        if(a[i]<a[i+1])
        {
            count++;
        }
        if(count>m)
        {
            m=count;
        }
        if(a[i]>=a[i+1])
            count=1;
    }
    cout<<m<<endl;
        }
}
