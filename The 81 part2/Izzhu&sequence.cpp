#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{


    ll n,x,y,res;
    cin>>x>>y>>n;

    if((n/3)%2!=0&&n%3==0)
    {

            res=y-x;
    }
    else if((n/3)%2==0&&n%3==0)
    {

            res=-(y-x);

    }
    else if((n/3)%2==0)
    {
        if(n%3==1)
            res=x;
        else
            res=y;
    }
    else if((n/3)%2!=0)
    {
        if(n%3==1)
            res=-x;
        else
            res=-y;
    }
    res=res%1000000007;
    if(res<0)
        cout<<res+1000000007<<endl;
    else
        cout<<res<<endl;

}
