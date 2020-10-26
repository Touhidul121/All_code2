#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    ll sum=1;

    for(ll i=1;i<=min(a,b);i++)
        sum*=i;

    cout<<sum<<endl;
}
