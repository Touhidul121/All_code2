#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num[5][5]={0};
    int v[5][5]={0};

    //int i,j;

    for(int i=1;i<4;i++)
        for(int j=1;j<4;j++)
        cin>>num[i][j];

        for(int i=1;i<4;i++)
        {
            for(int j=1;j<4;j++)
            {
                v[i][j]=num[i][j]+num[i+1][j]+num[i-1][j]+num[i][j+1]+num[i][j-1];
                if(v[i][j]&1)
                    v[i][j]=0;
                else
                    v[i][j]=1;
            }
        }
        for(int i=1;i<4;i++)
        {
            for(int j=1;j<4;j++)
                cout<<v[i][j];
            cout<<endl;
        }

}
