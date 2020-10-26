#include<bits/stdc++.h>
#define inf INT_MAX
using namespace std;


typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,a,need=0,x;
        cin>>n>>k;
        vector<ll>v;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            need+=(k-(a%k));
        }
        ll stock=0,res=inf;
        for(int i=0;i<n;i++)
        {
            stock+=v[i];
            need-=(k-(v[i]%k));
            if(stock<need)
                continue;
            else
            {
                x=stock;
                x-=need;
                x=x%k;
                res=min(x,res);
            }
        }
        cout<<res<<"\n";
    }
}
