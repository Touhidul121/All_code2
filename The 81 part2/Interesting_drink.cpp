#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll n,m,a,flag=0,x;
    cin>>n;
    vector<ll>v(n+5),v1;
    cin>>x;
    v[x]=1;
    for(int i=1;i<n;i++)
    {
    cin>>a;
    for(int j=1;j<=a;j++)
    {
        v[j]=i+1;
    }
    //mp[a]=i+1;
    }
    cin>>m;

    for(int i=0;i<m;i++)
    {
        flag=0;
        for(int j
        }
        if(flag==n)
        cout<<0<<endl;
    }
}
