#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,ans=0;
cin>>n;
    for(int i=n;i>=1;i--)
        ans+=(1/(i*1.0));

    cout<<fixed<<setprecision(12)<<ans<<"\n";
}
