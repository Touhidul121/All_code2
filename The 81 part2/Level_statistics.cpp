#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t1;
    cin>>t1;
    while(t1--)
    {

    int n1,flag1=0,a1,b1;
    cin>>n1;
    vector<pair<int,int>>v1;

    for(int i=0;i<n1;i++)
    {
        cin>>a1>>b1;

        if(b1>a1)
            flag1++;
        v1.push_back(make_pair(a1,b1));
    }

    for(int i=0;i<n1-1;i++)
    {
        if(v1[i].first>v1[i+1].first||v1[i].second>v1[i+1].second)
        {
            flag1++;
        }
        else if(v1[i+1].second-v1[i].second>v1[i+1].first-v1[i].first)
            flag1++;
    }
    if(flag1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    }
}
