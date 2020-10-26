#include<bits/stdc++.h>
using namespace std;
#define maxN 5001
int dp[maxN][maxN];
int min1(int x,int y,int z)
{
    return min(x,min(y,z));
}
int edit_distance(string str1,string str2,int m,int n) // convert str2-->str1 that means at the end str1==str2
{
 if(m==0) // if str1 is empty add all the characters of str2
        return n;
 if(n==0) // if str2 is empty remove all the characters from str1
    return m;
    if(dp[m][n]!=-1)
        return dp[m][n];
 if(str1[m-1]==str2[n-1]) //if last characters are equal just ignore them
    return dp[m][n]=edit_distance(str1,str2,m-1,n-1);
 return dp[m][n]=1+min1(edit_distance(str1,str2,m,n-1),
              edit_distance(str1,str2,m-1,n),
              edit_distance(str1,str2,m-1,n-1));
}

int main()
{
    memset(dp,-1,sizeof(dp));
    string str1,str2;
    cin>>str1>>str2;
    cout<<edit_distance(str1,str2,str1.size(),str2.size());
}
