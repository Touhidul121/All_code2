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
        vector<ll>v;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        vector<ll>v1;
        for(int i=0;i<n-1;i++)
        {
            v1.push_back(v[i+1]-v[i]);
        }
        cout<<*min_element(v1.begin(),v1.end())<<"\n";
    }
}
