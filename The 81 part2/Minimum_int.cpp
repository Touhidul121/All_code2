#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    ll l,r,d;
    cin>>l>>r>>d;

    if(d<l)
    {
        cout<<d<<endl;
    }
    else
        cout<<r+d-r%d<<endl;
    }
}
