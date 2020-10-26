#include<bits/stdc++.h>
using namespace std;
string LCS(string s1,string s2)
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
            i--,j--;
        }
        // else go in the direction of larger value
        else if(L[i-1][j]>L[i][j-1])
            i--;
        else
            j--;
    }
    reverse(lcs.begin(),lcs.end());
    return lcs;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;

   string ans= LCS(s1,s2);

   string s=s1+s2;
   int i=0,j=0;

   while(i<s.size())
   {
       if(s[i]==ans[j])
       {
           s[i]='#';j++;
       }
       if(j==ans.size())break;

       i++;
   }
   for(int i=0;i<s.size();i++)
   {
       if(s[i]!='#')cout<<s[i];
   }
   cout<<"\n";
}

