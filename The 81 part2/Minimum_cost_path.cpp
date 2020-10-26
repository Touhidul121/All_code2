#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;
    int v[row][col];
    int v1[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            cin>>v[i][j];
    }

    v1[0][0]=v[0][0];
    for(int j=1;j<col;j++)
        v1[0][j]=v[0][j]+v1[0][j-1];
    for(int i=1;i<row;i++)
        v1[i][0]=v[i][0]+v1[i-1][0];

    for(int i=1;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            v1[i][j]=min(v1[i-1][j],v1[i][j-1])+v[i][j];
        }
    }
cout<<"minimum cost = "<<v1[row-1][col-1]<<"\n";
    //path
    cout<<"----- path----- "<<"\n";
    cout<<v[row-1][col-1]<<" ";
    for(int i=row-1,j=col-1;i>=1&&j>=1;)
    {

            if(v1[i][j-1]<v1[i-1][j]){
                cout<<v[i][j-1]<<" ";
                j--;
            }
            else{
                cout<<v[i-1][j]<<" ";
                i--;
            }


    }
    cout<<v[0][0]<<"\n";
}
