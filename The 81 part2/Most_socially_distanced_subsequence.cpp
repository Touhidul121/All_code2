#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        vector<int>v,v1;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<n;i++)
        {
            if(i==0||i==n-1)
                v1.push_back(v[i]);
            else if(v[i]>v[i+1]&&v[i]>v[i-1])
                v1.push_back(v[i]);
            else if(v[i]<v[i+1]&&v[i]<v[i-1])
                v1.push_back(v[i]);
        }
        cout<<v1.size()<<"\n";
        for(auto x:v1)
            cout<<x<<" ";
        cout<<"\n";
    }
}
