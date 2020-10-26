#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n;
    ll ans;
    cin>>n;
    ans=(ll)1<<(n+1);
    ans=ans-2;
    cout<<ans<<endl;
}
