#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
ll n,gcd1=1,k=0,r,prev;
cin>>n;
ll a[n][n];
vector<int>v;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>a[i][j];
    }
}
int x=a[0][1];
for(int i=1;i<sqrt(x);i++)
{
    if(x%i==0)
        r=i;
}
cout<<r<<" "<<endl;
for(int i=1;i<n-1;i++)
{
    for(int j=1;j<n-1;j++)
    {
        if(i==j){
            {

                gcd1=__gcd(a[i-1][j],a[i][j+1]);

                if(a[i][j+1]>=r)
                {
                    x=a[i][j+1]/r;
                    r=x;
                }


            }
        v.push_back(min(gcd1,r));
        }
    }
}
cout<<a[0][1]/v[0]<<" ";
for(ll i=0;i<v.size();i++)
    cout<<v[i]<<" ";

    cout<<a[n-1][n-2]/v[v.size()-1]<<endl;
}
