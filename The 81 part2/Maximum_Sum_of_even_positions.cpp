#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        vector<int>v,v1,v2;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(i%2==0)ans+=a;
            v.push_back(a);
        }


    for(int i=1;i<n;i+=2)
    {
        v1.push_back(v[i]-v[i-1]);
        if(i+1<n)
            v2.push_back(v[i]-v[i+1]);


    }
    ll previous_best=0,mx=LLONG_MIN;
    ll previous_best1=0,mx1=LLONG_MIN;

    for(int i=0;i<v1.size();i++)
    {
        previous_best+=v1[i];

        if(previous_best<v1[i])
            previous_best=v1[i];

        mx=max(mx,previous_best);
    }

    for(int i=0;i<v2.size();i++)
    {
        previous_best1+=v2[i];

        if(previous_best1<v2[i])
            previous_best1=v2[i];

        mx1=max(mx1,previous_best1);
    }
    if(max(mx1,mx)>0)ans+=max(mx1,mx);
    cout<<ans<<"\n";
    }
}
