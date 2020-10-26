#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,m,count=0;
    cin>>n>>m;

    for(ll i=1;i<=n;i++)
    {

        if(m%i==0&&(m/i)<=n)
            count++;
    }
    cout<<count<<endl;
}
