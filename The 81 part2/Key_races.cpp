#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,v1,v2,p1,p2;
    cin>>n>>v1>>v2>>p1>>p2;

    int t1,t2;
    t1=2*p1+n*v1;
    t2=2*p2+n*v2;

    if(t1==t2)
        cout<<"friendship"<<endl;
    else if(t1<t2)
        cout<<"first"<<endl;
    else
        cout<<"second"<<endl;
}
