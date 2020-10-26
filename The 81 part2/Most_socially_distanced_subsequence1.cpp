#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        vector<int>v,ans;
        for(int i=0;i<n;i++)
            cin>>a , v.push_back(a);
        ans.push_back(v[0]);

        for(int i=1;i<n-1;i++)
        {
            if(v[i]>v[i-1]&&v[i]>v[i+1])
                ans.push_back(v[i]);
            else if(v[i]<v[i-1]&&v[i]<v[i+1])
                ans.push_back(v[i]);
        }
        ans.push_back(v[n-1]);
        cout<<ans.size()<<"\n";
        for(int x:ans)
            cout<<x<<" ";
        cout<<"\n";
    }
}
