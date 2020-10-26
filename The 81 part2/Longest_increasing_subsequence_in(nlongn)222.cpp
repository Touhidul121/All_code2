#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    vector<int>v;

    for(int i=0;i<n;i++)
        cin>>ar[i];
    v.push_back(ar[0]);

    for(int i=1;i<n;i++)
    {
        if(v.back()<ar[i])
            v.push_back(ar[i]);
        else
        {
            int ind=lower_bound(v.begin(),v.end(),ar[i])-v.begin();
            v[ind]=ar[i];
        }
    }
    cout<<v.size()<<"\n";

}
