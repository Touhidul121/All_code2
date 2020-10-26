#include<bits/stdc++.h>
using namespace std;

void LCS(string s1,string s2)
{
    int n,m;
    m=s1.size();
    n=s2.size();
    int L[m+1][n+1];

    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 || j==0)
            L[i][j]=0;
            else if(s1[i-1]==s2[j-1])
            L[i][j]=1+L[i-1][j-1];
            else
            L[i][j]=max(L[i-1][j],L[i][j-1]);

        }
    }

    int index=L[m][n];


    string lcs="";


    int i=m,j=n;

    while(i>0 && j>0)
    {
        if(s1[i-1]==s2[j-1]) // if char in s1 and s2 are same they are part of lcs
        {

            lcs+=s1[i-1];
            i--,j--,index--;
        }
        // else go in the direction of larger value
        else if(L[i-1][j]>L[i][j-1])
            i--;
        else
            j--;
    }
    reverse(lcs.begin(),lcs.end());
    cout<< "longest common subsequence size "<<L[m][n]<<"\n";
    cout<< "lcs is : "<<lcs<<"\n";
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;

    LCS(s1,s2);
}
