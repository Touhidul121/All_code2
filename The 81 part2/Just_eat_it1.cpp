#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        ll n,a,sum=0;
        cin>>n;
        vector<ll>v;
        vector<ll>pref(n+1);

        for(int i=0;i<n;i++){
            cin>>a ;
            sum+=a ;

            v.push_back(a);
        }
        ll previous_best=0;
        ll mx=LLONG_MIN;

        for(int i=0;i<n;i++)
        {
            previous_best+=v[i];
            if(previous_best<v[i])
                previous_best=v[i];
            mx=max(mx,previous_best);
        }

    for(int i=0;i<n;i++)
    {
        pref[i+1]=pref[i]+v[i];
    }
    int ind1=0;
    for(int i=1;i<=n;i++)
    {
        if(mx==pref[i])
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
        if(sum1==mx)
        {
            ind2=j;
            break;
        }
    }
    if(ind2==0&&ind1==n-1)
        cout<<"YES"<<"\n";
    else if(sum>mx)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
    }
}
