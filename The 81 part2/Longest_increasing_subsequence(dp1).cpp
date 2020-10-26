#include<bits/stdc++.h>
using namespace std;

int longest(int *v,int n)
{
    vector<int>v1(n,1);
    int ind[n];

    for(int i=0;i<n;i++)
        ind[i]=-1;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {

          if(v[j]<v[i])
          {
              v1[i]=max(v1[i],v1[j]+1);
              ind[i]=j;
          }

        }
    }
    int mx;
    mx=*max_element(v1.begin(),v1.end());

    int ind1;
    for(int i=0;i<n;i++)
    {
        if(mx==v1[i])
        {
            ind1=i;
            break;
        }
    }
    int next_lock=ind1;
    cout<<"subsequence "<<"\n";
    while(next_lock!=-1)
    {
        cout<<v[next_lock]<<"\n";
        next_lock=ind[next_lock];
    }
    return *max_element(v1.begin(),v1.end());
}
int main()
{
    int n;
    cout<<"Enter the length of array"<<"\n";
    cin>>n;
    int v[n];
    cout<<"Enter elements"<<"\n";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int cnt=longest(v,n);
    cout<<" length = "<<cnt<<"\n";


}
