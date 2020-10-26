#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a>=b)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            if(a&1)
                a--;
            if(a<=2&&3*(a/2)<b)
                cout<<"NO"<<"\n";
            else
                cout<<"YES"<<"\n";

            }
        }

}
