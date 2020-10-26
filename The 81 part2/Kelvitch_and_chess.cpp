#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[8][8];
    int cntb=0,cntw=0,cnt=0,ans=0;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='B')
                cntb++;
            else
                cntw++;
        }
    }
    if(cntb==0)
        cout<<0<<"\n";
       else if(cntw==0)
            cout<<8<<"\n";

    else
    {
        for(int i=0;i<8;i++)
        {
            cnt=0;
            for(int j=0;j<8;j++)
            {
                if(a[i][j]=='B')
                    cnt++;
            }
            if(cnt==8)
                ans++;
        }
        for(int j=0;j<8;j++)
        {
            cnt=0;
            for(int i=0;i<8;i++)
            {
                if(a[i][j]=='B')
                    cnt++;
            }
            if(cnt==8)
                ans++;
        }
        cout<<ans<<"\n";
    }
}
