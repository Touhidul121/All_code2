#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,a;
    cin>>n>>k;

    vector<int>v;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
   if(k==0){
        if(v[0]==1)
    cout<<-1<<"\n";
   else
    cout<<1<<"\n";
   }
   else
    if(v[k-1]==v[k])
        cout<<-1<<"\n";
    else
        cout<<v[k-1]<<"\n";
}
