#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,flag=0;
        bool b=true,c=true;
        cin>>n;
        vector<ll>v,v1;

        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);

        }

        for(int i=0;i<n;i++)
        {
            cin>>a;
            v1.push_back(a);

        }
        if(v[0]!=v1[0])
        {
            cout<<"NO"<<endl;
        }
        else{
        for(int i=1;i<n;i++)
        {
            if(v[i-1]==1&&b)
            {

                b=false;
            }
            else if(v[i-1]==-1&&c)
            {

                c=false;
            }
            if(v[i]==v1[i])
                continue;
            else if(v1[i]<0&&c==false)
            {
                continue;
            }
            else if(v1[i]>0&&b==false)
            {
                continue;
            }
            else if(v1[i]==0)
            {
                if(v[i]<0&&b==false||v[i]>0&&c==false)
                    continue;

                else
                    flag++;
            }
            else
                flag++;
        }
        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    }

}
