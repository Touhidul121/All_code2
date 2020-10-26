#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    unordered_map<int,int>loc;
    set<pair<int,int>>st;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        loc[a[i]]=i;
    }
    int x;
    for(int i=1;i<=n;i++)
    {
        x=loc[i];

        if(x>i)
        {
            for(int j=x;j>=2;j--)
            {
             if(j==i)
                break;
                if(st.find({j,j-1})==st.end()&&a[j-1]>a[j])
                    {
                        swap(a[j],a[j-1]);
                        st.insert({j,j-1});
                    }

            }
        }
    }
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
        cout<<"\n";

    }
}
