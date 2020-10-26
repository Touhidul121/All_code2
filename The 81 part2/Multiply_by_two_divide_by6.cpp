#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
     cin>>t;
     while(t--)
     {
         ll n,cnt=0,cnt1=0;
         bool f=false;
         cin>>n;

            while(true)
            {
                if(n==1)
                    break;
               else if(n%6==0){
                    n/=6;
                    cnt++;
                }
                else
                {
                   n*=2;

                   cnt1++;
                   if(cnt1>20)
                   {
                       f=true;
                       break;
                   }

                }
            }

            if(f)
                cout<<-1<<"\n";
            else{
                cout<<cnt+cnt1<<"\n";
            }


     }
}
