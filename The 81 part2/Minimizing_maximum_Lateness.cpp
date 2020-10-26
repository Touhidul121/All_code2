#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back({a,b});
    }
    for(int i=0;i<n;i++)
    {
        swap(v[i].first,v[i].second);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        swap(v[i].first,v[i].second);
    }
    vector<int>v1;
    int prev=0,cnt=0;
    for(int i=0;i<n;i++)
    {
       if(prev+v[i].first<=v[i].second)
       {
           cnt=0;
       }
       else
       {
           cnt=((prev+v[i].first)-v[i].second);
       }
       v1.push_back(cnt);
       prev=prev+v[i].first;
    }
    cout<<" Maximum Lateness = "<<*max_element(v1.begin(),v1.end())<<"\n";
    cout<<" List of Lateness : "<<'\n';
    cout<<"------------------"<<"\n";
    for(auto x:v1)
        cout<<x<<" ";

}
