#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
    ll n,a,b,c,d,flag=0;

    cin>>n>>a>>b>>c>>d;

    ll x,y,p,q;
    x=a-b;
    y=a+b;
    p=c-d;
    q=c+d;


    if(x*n>c+d)
        cout<<"No"<<"\n";
    else if(y*n<c-d)
        cout<<"No"<<"\n";
        else
            cout<<"Yes"<<"\n";
}
}
