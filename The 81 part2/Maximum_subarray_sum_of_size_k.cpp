#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter array size "<<"\n";
    cin>>n;
    int a[n+1];

    cout<<"Enter array Element "<<"\n";
    for(int i=1;i<=n;i++)
        cin>>a[i];

        cout<<"Enter Sub array size "<<"\n";
        int k;
        cin>>k;
    int sum=0,mx=0;

    for(int i=1;i<=k;i++)
        sum+=a[i];
      mx=sum;

    for(int i=2;i<=n-2;i++)
    {
        sum=sum+a[i+k-1];

        sum=sum-a[i-1];

        if(mx<sum)
            mx=sum;
    }
    cout<<mx<<"\n";

}
