#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=1,mx=1;
    cin>>n;
    int a[n+5];

    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]>=a[i])
            cnt++;
        if(mx<cnt)
            mx=cnt;
        if(a[i+1]<a[i])
            cnt=1;
    }
    cout<<mx<<"\n";
}
