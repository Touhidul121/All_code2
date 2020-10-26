#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    double l,r,x,y,k;

    cin>>l>>r>>x>>y>>k;
k=k*1.0;

    if(k>=(r/y)&&k<=(r/x))
    cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
}
