#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    vector<int>v,ans;

    for(int i=0;i<n;i++)
        cin>>a , v.push_back(a);

    ans.push_back(v[0]);

    for(int i=1;i<n;i++)
    {
        if(ans.back()<v[i])
            ans.push_back(v[i]);
        else
        {
            int ind=lower_bound(ans.begin(),ans.end(),v[i])-ans.begin();

            ans[ind]=v[i];
        }
    }
    cout<<ans.size()<<"\n";
}
