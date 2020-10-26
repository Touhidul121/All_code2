#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,count1=0,count2=0,sum1=0,sum=0,x;
    cin>>n;
    ll a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0)
            count1++;
        if(a[i]<0)
            count2++;
    }
     x=count2;

    sort(a,a+n);

    if(x%2==0)
    {
        for(int i=0;i<x;i++)
        {
            sum=sum+(-1-a[i]);
        }
    }
    else
    {
        for(int i=0;i<x-1;i++)
        {
            sum=sum+(-1-a[i]);
        }
        if(count1>0)
        {

            sum=sum+(-1-a[x-1]);
        }
        else
        sum=sum+(1-a[x-1]);
    }
    for(int i=x;i<n;i++)
    {
        if(a[i]>0&&a[i]!=1)
            sum1=sum1+(a[i]-1);
    }
    cout<<(ll)sum+sum1+count1<<endl;
}
