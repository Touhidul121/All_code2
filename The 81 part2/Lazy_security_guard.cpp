#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int w,h;
    w=trunc(sqrt(n));
    h=(int)ceil(n/(w*1.0));
    cout<<2*(w+h)<<endl;
}
