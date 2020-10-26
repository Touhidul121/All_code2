#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--){
    ll n,a;

    cin>>n;
    ll v[n];
    vector<ll>v1,v2;
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    ll previous_best=0,mx=INT_MIN,prev=0;
    for(int i=0;i<n;i++)
    {
        previous_best=previous_best+v[i];
        if(previous_best<v[i]){

            previous_best=v[i];

        }

        v1.push_back(previous_best);// if(mx<prvious_best)
                                       //mx=previous_best  // aivabe max nirnoy korle vector lagbe na
    }

    ll res=*max_element(v1.begin(),v1.end());
    vector<ll>pref(n+1);
    for(int i=0;i<n;i++)
    {
        pref[i+1]=pref[i]+v[i];
    }
    int ind1=0;
    for(int i=1;i<=n;i++)
    {
        if(res==pref[i])
        {
            ind1=i-1;
            break;
        }
    }

    int ind2=0;
    ll sum1=0;
    for(int j=ind1;j>=0;j--)
    {
        sum1+=v[j];
        if(sum1==res)
        {
            ind2=j;
            break;
        }
    }
    if(ind2==0&&ind1==n-1)
        cout<<"YES"<<"\n";
    else if(sum>res)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
}    }
