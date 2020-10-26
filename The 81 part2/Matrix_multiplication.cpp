#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][n];
    long long x,y,z,r;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
    x=a[0][1],y=a[0][2],z=a[1][2];
    r=sqrt((long long)((x*y)/z));

    cout<<r<<" ";
    for(int j=1;j<n;j++)
        cout<<a[0][j]/r<<" ";
    cout<<"\n";
}
