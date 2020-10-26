#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[5][5];
    int count1=0,count2=0;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            count1=0,count2=0;
            for(int k=j;k<=j+1;k++)
            {
                if(a[i][k]=='#')
                    count1++;
                if(a[i+1][k]=='#')
                        count1++;
                    if(a[i][k]=='.')
                        count2++;
                    if(a[i+1][k]=='.')
                        count2++;
            }

            if((count1==3&&count2==1)||(count1==1&&count2==3)||(count1==4&&count2==0)||(count2==4&&count1==0))
            {
                cout<<"YES"<<endl;
                return 0;
            }

        }
    }
    cout<<"NO"<<endl;
}
