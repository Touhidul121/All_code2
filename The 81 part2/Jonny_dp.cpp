#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll res(ll n)
{
    if(n==0)
        return 0;
    else
        return n+res(n/2);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
cout<<(ll)res(n)<<"\n";

    }
}
