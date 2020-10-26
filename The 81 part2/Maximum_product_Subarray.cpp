#include<bits/stdc++.h>
using namespace std;

int maximum(int a,int b,int c)
{
    return max(a,max(b,c));
}

int minimum(int a,int b,int c)
{
    return min(a,min(b,c));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,b;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)cin>>b , a.push_back(b);

    int cur_maxproduct=a[0];
    int cur_minproduct=a[0];
    int prev_maxproduct=a[0];
    int prev_minproduct=a[0];
    int ans=a[0];

    for(int i=1;i<n;i++)
    {
        cur_maxproduct=maximum(prev_maxproduct*a[i],prev_minproduct*a[i],a[i]);
        cur_minproduct=minimum(prev_maxproduct*a[i],prev_minproduct*a[i],a[i]);
        ans=max(ans,cur_maxproduct);
        prev_maxproduct=cur_maxproduct;
        prev_minproduct=cur_minproduct;
    }
    cout<<ans<<"\n";
}
