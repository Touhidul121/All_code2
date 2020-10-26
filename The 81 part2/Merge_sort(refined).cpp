#include<bits/stdc++.h>
using namespace std;


void merge(vector<int>&A,int l,int mid,int h)
{
    int i=l,j=mid+1,k=l;
    int B[200001];
    while(i<=mid && j<=h)
    {
        if(A[i]<A[j])
            B[k++]=A[i++];
        else
            B[k++]=A[j++];
    }
    for(; i<=mid; i++)
        B[k++]=A[i];

    for(; j<=h; j++)
        B[k++]=A[j];

    for(i=l; i<=h; i++)
        A[i]=B[i];
}

void merge_sort(vector<int>&A,int l,int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        merge_sort(A,l,mid);
        merge_sort(A,mid+1,h);

        merge(A,l,mid,h);
    }
}

int main()
{
    int n,a;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)cin>>a , v.push_back(a);

    merge_sort(v,0,n-1);

    for(int i=0;i<n;i++)cout<<v[i]<<" ";
}
