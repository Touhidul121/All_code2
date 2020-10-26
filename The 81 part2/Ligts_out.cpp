#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
            if(a[i][j]&1)
                a[i][j]=1;
            else
                a[i][j]=0;
        }
    }



       int i=0,j=0;

            if(i==0&&j==0&&a[i][j]==1)
            {

                a[i][j]=a[i][j]-2;
                a[i][j+1]=a[i][j+1]-2;
                a[i+1][j]=a[i+1][j]-2;
            }
            if(i==0&&j==1&&a[i][j]==1)
            {
                a[i][j]=a[i][j]-2;
                a[i][j+1]=a[i][j+1]-2;
                a[i][j-1]=a[i][j-1]-2;
                a[i+1][j]=a[i+1][j]-2;
            }
            if(i==0&&j==2&&a[i][j]==1)
            {
                a[i][j]=a[i][j]-2;
                a[i][j-1]=a[i][j-1]-2;
                a[i+1][j]=a[i+1][j]-2;
            }


            if(i==1&&j==0&&a[i][j]==1)
            {
                a[i][j]=a[i][j]-2;
                a[i-1][j]=a[i-1][j]-2;
                a[i+1][j]=a[i+1][j]-2;
                a[i][j+1]=a[i][j+1]-2;

            }
            if(i==1&&j==1&&a[i][j]==1)
            {
                a[i][j]=a[i][j]-2;
                a[i][j+1]=a[i][j+1]-2;
                a[i][j-1]=a[i][j-1]-2;
                a[i-1][j]=a[i-1][j]-2;
                a[i+1][j]=a[i+1][j]-2;
            }
           if(i==1&&j==2&&a[i][j]==1)
            {
                a[i][j]=a[i][j]-2;
                a[i][j-1]=a[i][j-1]-2;
                a[i-1][j]=a[i-1][j]-2;
                a[i+1][j]=a[i+1][j]-2;
            }
            if(i==2&&j==0&&a[i][j]==1)
            {
                a[i][j]=a[i][j]-2;
                a[i-1][j]=a[i-1][j]-2;
                a[i][j+1]=a[i][j+1]-2;

            }
            if(i==2&&j==1&&a[i][j]==1)
            {
                a[i][j]=a[i][j]-2;
                a[i-1][j]=a[i-1][j]-2;
                a[i][j-1]=a[i][j-1]-2;
                a[i][j+1]=a[i][j+1]-2;
            }
            if(i==2&&j==2&&a[i][j]==1)
            {
                a[i][j]=a[i][j]-2;
                a[i][j-1]=a[i][j-1]-2;
                a[i-1][j]=a[i-1][j]-2;

            }

    for(int i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
