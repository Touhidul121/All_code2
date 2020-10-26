#include<bits/stdc++.h>
using namespace std;
void computelps(string pat, int M, int* lps)
{

    int len = 0;

    lps[0] = 0;
    int i = 1;
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {

            if (len != 0) {
                len = lps[len - 1];


            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    string pat;
    cin>>pat;
    int m=pat.size();
    int lps[m];
    computelps(pat,m,lps);
    int len=pat.size()-lps[m-1];

        for(int i=0;i<k-1;i++)
            cout<<pat.substr(0,len);
        cout<<pat<<"\n";
}
