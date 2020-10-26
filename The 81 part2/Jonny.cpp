#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a==b)
            cout<<0<<"\n";
        else
        {
            if(a<b)
                swap(a,b);
                if(a%b!=0)
                    cout<<-1<<"\n";
                else
                {
                    ll cnt=0,n=a/b;
                    while(n%8==0)
                    {
                        cnt++;
                        n/=8;
                    }
                    while(n%4==0)
                    {
                        cnt++;
                        n/=4;
                    }
                    while(n%2==0)
                    {
                        cnt++;
                        n/=2;
                    }
                    if(n==1)
                        cout<<cnt<<"\n";
                    else
                        cout<<-1<<"\n";
}}}                }
