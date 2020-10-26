#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,count=0,a;
    cin>>n;
vector<int>v(5);

    for(int i=0;i<n;i++)
    {
        cin>>a;
    v[a%3]++;
    }

int cnt0=v[0],cnt1=v[1],cnt2=v[2];
//cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
int ans=0;
ans+=cnt0;
//cout<<ans<<endl;
if(cnt1<cnt2)
{
    ans+=cnt1;
    ans+=(cnt2-cnt1)/3;
}
else if(cnt2<=cnt1)
{
    ans+=cnt2;
    ans+=(cnt1-cnt2)/3;
}


    cout<<ans<<endl;
    }
}
