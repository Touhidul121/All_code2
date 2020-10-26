#include<bits/stdc++.h>
using namespace std;

int longest_common_subsequence(string str1,string str2)
{
    int row=str1.size();
    int col=str2.size();

    int lcs[row][col];
    for(int j=0;j<col;j++)
        lcs[0][j]=0;
    for(int i=0;i<row;i++)
        lcs[i][0]=0;
    for(int i=1;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            if(str1[i]==str2[j])
                lcs[i][j]=1+lcs[i-1][j-1];
            else
                lcs[i][j]=max(lcs[i][j-1],lcs[i-1][j]);
        }
    }
    return lcs[row-1][col-1];
}
int main()
{
    string x="Ab3bd";
    string x_r=x;
    reverse(x_r.begin(),x_r.end());
    int l=longest_common_subsequence(x,x_r);
    cout<<x.size()-l<<"\n";
}
