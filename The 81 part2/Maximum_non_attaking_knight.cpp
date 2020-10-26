#include<bits/stdc++.h>
using namespace std;

int solve(int n,int m)
{
    if(n==1 || m==1)
        return max(n,m);
    else if(n==2 || m==2)
    {
        int ans=0;
        ans=(max(n,m)/4)*4;
        if(max(n,m)%4==1)ans+=2;
        else if(max(n,m)%4>1)ans+=4;
        return ans;
    }
    else return (n*m+1)/2;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n,m;cin>>n>>m;
    cout<<solve(n,m)<<"\n";
}
