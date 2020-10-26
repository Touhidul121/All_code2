#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *p,*q,i,j,k,*r;
    cout<<"Enter length of first array"<<endl;
    int n,m;
    cin>>n;
    p=new int[n];
    cout<<"Enter elements of first array(p must be sorted)"<<endl;
    for (int i=0;i<n;i++)
    {
      cin>>p[i];
    }
    cout<<"Enter length of second array"<<endl;
    cin>>m;
    q=new int[m];

    cout<<"Enter elements of second array(elements must be sorted"<<endl;
    for(int i=0;i<m;i++)
        cin>>q[i];
    r=new int[m+n];
    i=0,j=0,k=0;
    while(i<n&&j<m)
    {
        if(p[i]<=q[j])
        {
         r[k++]=p[i++];
        }
        else
            r[k++]=q[j++];
    }
    for(;i<n;i++)
        r[k++]=p[i];
    for(;j<m;j++)
        r[k++]=q[j];

    for(int i=0;i<m+n;i++)
        cout<<r[i]<<" ";

}
