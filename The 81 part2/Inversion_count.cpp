#include<bits/stdc++.h>
using namespace std;

static int inv_count=0;
int Merge(int A[],int l,int mid,int h)
{
 int i=l,j=mid+1,k=l;

 int B[100];
 while(i<=mid && j<=h)
 {
 if(A[i]<A[j])
 B[k++]=A[i++];
 else
 B[k++]=A[j++];
 inv_count=inv_count+(mid-i);
 }
 for(;i<=mid;i++)
 B[k++]=A[i];
 for(;j<=h;j++)
 B[k++]=A[j];
 for(i=l;i<=h;i++)
 A[i]=B[i];
 return inv_count;
}
int mergesort(int A[],int l,int h)
{
    int mid;

    if(l<h)
    {
        mid=(l+h)/2;
        inv_count+=mergesort(A,l,mid);
        inv_count+=mergesort(A,mid+1,h);
        inv_count+=Merge(A,l,mid,h);
    }
    return inv_count;
}

int main()
{
    int A[1000];
  cout<<"Enter the size of Array"<<"\n";
  int n;
  cin>>n;
  cout<<"Enter elements"<<"\n";
  for(int i=0;i<n;i++)
        cin>>A[i];
        int cnt=0;
  cnt=mergesort(A,0,n-1);
  for(int i=0;i<n;i++)
    cout<<A[i]<<" ";
    cout<<cnt<<"\n";
}
