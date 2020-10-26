#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a;
    cin>>n;
    vector<long long>v;
    long long ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    for(int i=1;i<n;i++)
    {
        if(v[i]<v[i-1])
        {

            ans+=v[i-1]-v[i];
           v[i]=v[i-1];
        }
    }
    cout<<ans<<"\n";
}
