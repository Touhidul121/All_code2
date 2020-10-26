#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ind;
    cin>>n;
    int ar[n];

    for(int i=0;i<n;i++)
        cin>>ar[i];

    vector<int>v;
    v.push_back(ar[0]);

    for(int i=1;i<n;i++)
    {
        if(v.back()<ar[i])
            v.push_back(ar[i]);
        else
        {
          ind=lower_bound(v.begin(),v.end(),ar[i])-v.begin();
          v[ind]=ar[i];
        }
    }
    cout<<v.size()<<"\n";
}

