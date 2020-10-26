#include<bits/stdc++.h>
using namespace std;

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
        vector<int>v,v1,v2,index;

        for(int i=0;i<n;i++)
            cin>>a , v.push_back(a),v1.push_back(a);

        int mn=*min_element(v.begin(),v.end());

        for(int i=0;i<n;i++)
        {
            if(v[i]%mn==0)
            {
                index.push_back(i);
                v2.push_back(v[i]);
            }
        }
        sort(v2.begin(),v2.end());
        sort(v1.begin(),v1.end());

        for(int i=0;i<v2.size();i++)
        {
            v[index[i]]=v2[i];
        }
        if(v==v1)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
}
