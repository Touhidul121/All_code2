#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,m=INT_MAX;
    cin>>n;
    vector<int> v(n);
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(m>v[i])
            m=v[i];
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]%m==0)
            count++;
    }
    if(count==n)
        cout<<m<<endl;
    else
        cout<<-1<<endl;

}
