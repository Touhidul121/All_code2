#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    int t;
    cin>>t;
    while(t--){
    ll n,k;
    cin>>n>>k;
    string s;
    s=string(n,'a');

    ll ans=round(sqrt(2.0*k));
    ll r=ans;
    ll cnt=-1;
    while(r==ans)
    {
        r=round(sqrt(2.0*k));
        k--;
        cnt++;
    }

    s[n-(ans+1)]='b';
    s[n-cnt]='b';
    cout<<s<<"\n";
    }
}
