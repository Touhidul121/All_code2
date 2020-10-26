#include<bits/stdc++.h>
using namespace std;

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n;
    cin>>n;
    int count=0,tm=0;
    int v[n][n];
    for(int i=0;i<n;i++)
    {
        if(tm%2==0)
        {
            for(int j=0;j<n;j++)
            {
                count++;v[i][j]=count;
            }
        }
        else
        {
            for(int j=n-1;j>=0;j--)
            {
                count++;v[i][j]=count;
            }
        }
        tm++;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
}
