#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,flag1=0,flag2=0;
    cin>>n;
    vector<int> v;

    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(a-b);
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<0)
            flag1++;
    if(v[i]>0)
        flag2++;
    }
    if(flag1&&flag2)
        cout<<"Happy Alex"<<endl;
    else
        cout<<"Poor Alex"<<endl;
}
