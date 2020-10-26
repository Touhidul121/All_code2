#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[6]={4,8,15,16,23,42};
    int n=6;
    map<int,pair<int,int>>mp;
    for(int i=0;i<6;i++)
    {
        mp[a[i]*a[i]]=make_pair(i+1,i+1);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            mp[a[i]*a[j]]=make_pair(i+1,j+1);
        }
    }
    int m;
    cin>>m;

    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        for(auto x:mp)
        {
            if(x.first==a)
            {
                cout<<x.second.first<<" "<<x.second.second<<endl;
            }
        }
    }


}
