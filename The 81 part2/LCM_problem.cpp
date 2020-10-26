#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
       if(l*2<=r)
       {
           cout<<l<<" "<<2*l<<"\n";
       }
       else
        cout<<-1<<" "<<-1<<"\n";
    }
}
