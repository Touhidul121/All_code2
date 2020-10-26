#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,r;
    cin>>n>>l>>r;
    int sum=0,sum1=0;
    for(int i=1;i<=l-1;i++)
        sum+=pow(2,i);
    sum=sum+(n-l+1);

    for(int i=0;i<r-1;i++)
        sum1+=pow(2,i);

    sum1=sum1+(n-r+1)*pow(2,r-1);

    cout<<sum<<" "<<sum1<<endl;
}
