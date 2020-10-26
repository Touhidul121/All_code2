#include<bits/stdc++.h>
using namespace std;

void Insert(int H[],int n)
{
    int i=n,temp;
    temp=H[i];

    while(i>1&&temp>H[i/2])
    {
        H[i]=H[i/2];
        i=i/2;
    }
    H[i]=temp;
}

//Delete function

int Delete(int H[],int n)
{
    int i,j,x,val;
    x=H[n];
    val=H[1];
    H[1]=H[n];
    i=1;
    j=i*2;
    while(j<n-1)
    {
        if(H[j+1]>H[j])
            j=j+1;
        if(H[i]<H[j])
        {
            swap(H[i],H[j]);
            i=j;
            j=2*i;
        }
        else
            break;
    }
    return val;
}
int main()
{
    int n;

    cout<<"Enter Heap size"<<"\n";
    cin>>n;
    int H[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>H[i];
    }
    for(int i=1;i<=n-1;i++)
    {
        Insert(H,i);
    }
    for(int i=1;i<=n-1;i++)
    {
        cout<<H[i]<<" ";
    }
//Delete fun

//cout<<"Deleted value is = "<<Delete(H,n-1)<<"\n";

//Heap sort
int A[n];
int k=0,p=n-1;

while(p>=1)
{
 A[k++]=Delete(H,p);
 --p;
}

//After sorting
cout<<"\n";

for(int i=0;i<k;i++)
    cout<<A[i]<<" ";
}
