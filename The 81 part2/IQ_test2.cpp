#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ind1,ind2,cnt1=0,cnt2=0,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a&1)
        {
            ind1=i+1, cnt1++;
        }
        else
            ind2=i+1,cnt2++;
    }
    if(cnt1<cnt2)
        cout<<ind1<<"\n";
    else
        cout<<ind2<<"\n";
}
