#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int row[n],col[m];
    memset(row,-1,sizeof(row));
    memset(col,-1,sizeof(col));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cin>>a[i][j];
        if(a[i][j]==0)row[i]=0,col[j]=0;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(row[i]==0)
        {

            for(int j=0;j<m;j++)
                a[i][j]=0;
        }
    }

    for(int j=0;j<m;j++)
    {
        if(col[j]==0)
        {
            for(int i=0;i<n;i++)
                a[i][j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

}
