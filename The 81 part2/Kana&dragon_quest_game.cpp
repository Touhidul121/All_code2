#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
   ll x,n,m;
   cin>>x>>n>>m;

   if(x<=20)
   {
       if(m*10>=x)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
   }
   else
   {
       while(n>0)
       {

           x=((int)(floor)(x/2.0))+10;

           if(x<=20)
            break;
           n--;
       }
       if(m*10>=x)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
   }
    }
}
