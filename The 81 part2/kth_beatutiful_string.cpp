#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void fun()
{
    ll n,k;
    cin>>n>>k;
    ll term=0,x=0,y=0; // here x denotes index of leftmost b and y denotes index of rightmost b
    string s;
    s=string(n,'a');
    for(ll i=1; i<=k; i++)
    {

        term=(i*i+i)/2;
        if(term>=k)
        {

            x=i;
            break;
        }
    }
    ll term1=((x-1)*(x-1)+x-1)/2,r=0;

    for(ll j=term1; j<=term; j++)
    {
        if(j==k)
        {
            y =r;
            break;
        }
        r++;
    }
    s[n-1-x]='b';
    s[n-y]='b';
    cout<<s<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        fun();
    }
}
