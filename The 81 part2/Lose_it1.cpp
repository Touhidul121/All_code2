#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    map<int,int>mp;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
        if(!(mp[8]<=mp[4] && mp[15]<=mp[8] && mp[16]<=mp[15] && mp[23]<=mp[16] && mp[42]<=mp[23]))
        {
            arr[i]=-1;
            mp[arr[i]]--;
            if(mp[arr[i]]==0)mp.erase(arr[i]);
            cnt++;
        }
    }
    cout<<cnt<<"\n";
    int x=0,ans=0;
    mp.clear();
    for(int i=0;i<n;i++)
    {
      if(arr[i]!=-1)mp[arr[i]]++;
    }
    x=min(mp[4],min(mp[8],min(mp[15],min(mp[16],min(mp[23],mp[42])))));


    cout<<n-x*6<<"\n";
}
