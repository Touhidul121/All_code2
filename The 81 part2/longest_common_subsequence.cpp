#include<bits/stdc++.h>
using namespace std;

int longest_common_subsequence(string str1,string str2)
{
    int row=str1.size();
    int col=str2.size();
    cout<<row<<" "<<col<<'\n';
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
    int j=row-1;
    for(int i=row-1;i>=1;i--)
    {

    for(;j>=1;j--)
    {
     if(lcs[i][j-1]!=lcs[i][j])
     {
         cout<<str2[j]<<" "<<j<<'\n';

         break;
     }
    }
    j--;


    }
    return lcs[row-1][col-1];
}

int main()
{
    string str1="0";//concatenate a char for the advantage
    string s,t;
    cin>>s>>t;
    string str2="0";//concatenate a char for the advantage
    str1+=s;
    str2+=t;
    cout<<"Length = "<<longest_common_subsequence(str1,str2)<<"\n";
}
