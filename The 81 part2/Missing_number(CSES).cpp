#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,a;
    cin>>n;
    ll sum=0;

    for(int i=1;i<=n-1;i++)
    {
        cin>>a;
        sum+=a;
    }
    cout<<((n*(n+1))/2)-sum<<"\n";
}
