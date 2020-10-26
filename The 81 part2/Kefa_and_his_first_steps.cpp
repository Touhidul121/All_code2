#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=1,a,m=0;
    cin>>n;
    vector<int> v;


    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
if(n==1)
    cout<<1<<endl;
else{
    for(int i=0;i<n-1;i++)
    {
        if(v[i]<=v[i+1])
            count++;
        if(m<count)
            m=count;
        if(v[i]>v[i+1])
            count=1;
    }
    cout<<m<<endl;
}
}
