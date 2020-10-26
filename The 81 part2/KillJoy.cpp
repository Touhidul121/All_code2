#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,x,a,cnt=0;
        cin>>n>>x;

        bool f=false;
        long long lsum=0,rsum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a==x)
            {
                f=true;cnt++;
            }
            if(a<=x)
               lsum+=(x-a);
            else
                rsum+=(a-x);
        }


        if(cnt==n)
        cout<<0<<"\n";
        else if(f || lsum==rsum)cout<<1<<"\n";

        else cout<<2<<"\n";
    }
}
