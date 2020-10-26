#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,flag1=0,flag2=0,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a<b)
            flag1++;
        else if(a>b)
            flag2++;
    }
    if(flag1&&flag2)
        cout<<"Happy Alex"<<endl;
    else
        cout<<"Poor Alex"<<endl;
}
