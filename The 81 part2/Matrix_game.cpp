#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n][m];
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];

            }
        }
        bool f1=false,f2=false;
        int k1=0,k2=0;
        for(int i=0;i<n;i++)
        {
             f1=false;
            for(int j=0;j<m;j++)
            {
                if(a[i][j]==1)
                    f1=true;
            }
            if(!f1)
                k1++;
        }
        for(int j=0;j<m;j++)
        {
             f2=false;
            for(int i=0;i<n;i++)
            {
                if(a[i][j]==1)
                    f2=true;
            }
            if(!f2)
                k2++;
        }

        int ans=min(k1,k2);
        if(ans&1)
            cout<<"Ashish"<<"\n";
        else
            cout<<"Vivek"<<"\n";
    }
}
