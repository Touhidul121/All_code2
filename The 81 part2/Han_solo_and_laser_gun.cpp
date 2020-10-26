#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,x,y;
    cin>>n>>x>>y;
    double x1,y1;
    int m=0;
    set<double>s;

    for(int i=0;i<n;i++)
    {
        cin>>x1>>y1;
        if(x!=x1)s.insert((y1-y)/(x1-x));
        else
            m=1;
    }
    cout<<s.size()+m<<"\n";
}
