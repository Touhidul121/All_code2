#include<bits/stdc++.h>
using namespace std;
int index;
void solve(vector<int>&v,int k)
{
    if(v.size()==0)
    {
        cout<<v[0]<<"\n";
        return;
    }
    static int index;
    index=(index+k)%v.size();
    v.erase(v.begin()+index);
    solve(v,k);
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=1;i<=n;i++)
        v.push_back(i);
    k--;
    solve(v,k);
}
