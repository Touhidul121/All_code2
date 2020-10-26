#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,a,x,i;
    vector<int>v;
    set<int>s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
        st.insert(a);
    }
    sort(v.begin(),v.end());
    bool flag=false;

    for(i=1;i<=1025;i++)
    {
        for(int j=0;j<n;j++)
        {
            x=v[j]^i;
            v1.push_back(x);
            if(s.find())
        }

    }
    if(flag)
        cout<<i<<"\n";
    else
        cout<<-1<<"\n";
    }
}
