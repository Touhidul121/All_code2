#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,k;
    cin>>n>>k;
    ll count5=0,count2=0;
    ll r=n,p=n,x;
    while(r%5==0)
    {
            count5++;
        r=r/5;
    }

    while(r%2==0)
    {

            count2++;
        r=r/2;
    }

    if(count5>=k)
        count5=0;
    else
    count5=k-count5;

    if(count2>=k)
        count2=0;
    else
        count2=k-count2;

    x=pow(2,count2)*pow(5,count5);

cout<<n*x<<endl;
}
