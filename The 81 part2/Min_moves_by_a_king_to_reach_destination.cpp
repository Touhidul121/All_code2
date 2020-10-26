#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int dx=x2-x1;
    int dy=y2-y1;

    while(!(dx==0 && dy==0))
    {
        if(x2>x1)
        {
            x1++;cout<<"D";
        }
        if(x2<x1)
        {
            x1--;cout<<"U";
        }
        if(y2>y1)
        {
            y1++;cout<<"R";
        }
        if(y1>y2)
        {
            y1--;cout<<"L";
        }
        dx=x2-x1;
        dy=y2-y1;
        cout<<"\n";
    }
}
