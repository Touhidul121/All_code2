#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    vector<int>v,res;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int mx=0,pre=v[0];
    res.push_back(v[0]);
    for(int i=1;i<n;i++)
    {
        mx=max(mx,pre);
        res.push_back(v[i]+mx);
        pre=v[i]+mx;
    }
    for(auto x:res)
        cout<<x<<" ";
    cout<<"\n";
}
