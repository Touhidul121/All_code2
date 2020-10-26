#include<bits/stdc++.h>
using namespace std;

void countRooks(int n,int k,vector<pair<int,int>>pos)
{
    int row[n+1]={};
    int col[n+1]={};

    for(int i=0;i<k;i++)
    {
        row[pos[i].first]=1;
        col[pos[i].second]=1;
    }
    int res=n-k;
    int ri=1,ci=1;
    while(res>0)
    {
        while(ri<=n && row[ri]==1)
        {
            ri++;
        }
        while(ci<=n && col[ci]==1)
        {
            ci++;
        }
        cout<<ri<<" "<<ci<<"\n";
        ri++,ci++,res--;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,k,a,b;
    cin>>n>>k;
    vector<pair<int,int>>pos;

    for(int i=0;i<k;i++)
    {
        cin>>a>>b;
        pos.push_back({a,b});
    }
    countRooks(n,k,pos);
}
