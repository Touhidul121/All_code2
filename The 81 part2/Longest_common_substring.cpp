#include<bits/stdc++.h>
using namespace std;

int longest_common_substring(string str1,string str2)
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
                lcs[i][j]=0;
        }
    }
    int m=-1,r,c;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(m<lcs[i][j]){
                m=lcs[i][j];
                r=i;
                c=j;
            }
        }
    }

    string ans="";
    while(lcs[r][c]!=0)
    {
        ans+=str1[r];
        r--;
        c--;

    }

    reverse(ans.begin(),ans.end());
    cout<<ans<<"\n";
    return m;
}

int main()
{
    string str1="0";//concatenate a char for the advantage
    string str2="0";//concatenate a char for the advantage
    string s1,s2;
    cin>>s1>>s2;
    str1+=s1;
    str2+=s2;
    cout<<"Length = "<<longest_common_substring(str1,str2)<<"\n";
}

