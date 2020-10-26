#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int q;
    cin>>q;
    while(q--){
    int n,r,a;
    cin>>n>>r;
    set<int>st;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        st.insert(a);
    }
    for(auto x:st)
        v.push_back(x);

    int ans=0;
    for(int i=v.size()-1;i>=0;i--)
    {
        if(v[i]-ans*r<=0)continue;
        else ans++;
    }
    cout<<ans<<"\n";
    }
}
