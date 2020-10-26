#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    map<int,int>mp;
    mp[4]=0;
    mp[8]=1;
    mp[15]=2;
    mp[16]=3;
    mp[23]=4;
    mp[42]=5;

    int n;
    cin>>n;
    vector<int>v1(n);

    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
        v1[i]=mp[v1[i]];
    }

    vector<int>s(6);

    for(int i=0;i<n;i++)
    {
        if(v1[i]==0)
            s[0]++;
        else
        {
            if(s[v1[i]-1]>0)
            {
                s[v1[i]-1]--;
                s[v1[i]]++;
            }
        }
    }
    cout<<n-s[5]*6<<"\n";
}
