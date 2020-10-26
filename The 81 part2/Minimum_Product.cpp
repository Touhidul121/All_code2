#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,x,y,n,a1,b1,x1,y1,n1;
        ll ans1=0,ans2=0;
        cin>>a>>b>>x>>y>>n;
        a1=a;b1=b;x1=x;y1=y;n1=n;
        ll diff=a-x;
        ll diff2=b-y;

        if(diff>diff2)
        {
            a-=min(diff,n);
            n-=min(diff,n);
            b-=min(diff2,n);
            ans1=(ll)a*b;
        }
        else{
            b-=min(diff2,n);
        n-=min(diff2,n);
        a-=min(diff,n);
        ans1=(ll)a*b;
        }


            if(a1<b1)
            {

             a1-=min(diff,n1);
            n1-=min(diff,n1);

            b1-=min(diff2,n1);
             ans2=(ll)a1*b1;
            }
            else{
            b1-=min(diff2,n1);
        n1-=min(diff2,n1);
        a1-=min(diff,n1);
        ans2=a1*b1;
        }
        cout<<min(ans1,ans2)<<"\n";
    }
}
