#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,r,a;
        cin>>n>>r;
        int cnt=0;
        vector<int>v;
        set<int>st;
        for(int i=0;i<n;i++)
        {
            cin>>a;

            st.insert(a);
        }
        for(auto x:st)
            v.push_back(x);
        int x=0;
        n=v.size();
        for(int j=n-1;j>=0;j--)
        {
            if(v[j]-x*r>0)
                cnt++;
            x++;

        }
        cout<<cnt<<"\n";
    }
}
