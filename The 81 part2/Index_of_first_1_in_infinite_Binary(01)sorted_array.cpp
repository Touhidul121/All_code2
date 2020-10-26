/* infinite binary sorted array 00000011111.....

steps: 1. find high for the array
       2. find first occurrence of 1
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,a;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)cin>>a , v.push_back(a);

    int lo=0,hi=1,res=-1;
    int key=1;
    while(v[hi]<key)
    {
        lo=hi;
        hi=2*hi;
    }
    // cout<<lo<<" "<<hi<<"\n";
    while(lo<=hi)
    {
        int mid=(lo+hi)/2;
        if(v[mid]==key)
        {
            res=mid;
            hi=mid-1;
        }
        else if(v[mid]<key)
            lo=mid+1;
        else
            hi=mid-1;
    }
    cout<<res<<"\n";
}

