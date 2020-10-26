#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    n=7;
    int a[n]={4,6,1,3,8,4,6};
    int sum[n];
    for(int i=0;i<n;i++)
        sum[i]=a[i];
    int ind[n];

    for(int i=0;i<n;i++)
        ind[i]=-1;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j]<a[i])
            {
                if(a[i]+sum[j]>sum[i])
                {
                    sum[i]=a[i]+sum[j];
                    ind[i]=j;
                }

            }
        }
    }
    int mx;
    mx=*max_element(sum,sum+n);
    cout<<mx<<"\n";
    int ind1;
    for(int i=0;i<n;i++)
    {
        if(mx==sum[i])
        {
            ind1=i;
            break;
        }
    }
    int next_lock=ind1;
    while(next_lock!=-1)
    {
        cout<<a[next_lock]<<"\n";
        next_lock=ind[next_lock];
    }

}
