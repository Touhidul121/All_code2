#include<bits/stdc++.h>
using namespace std;

int main()
{

        int n,a;
        cin>>n;
        vector<int>v;
        vector<int>::iterator it;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        int q,m,ans=0;
        cin>>q;
        for(int i=0;i<q;i++)
        {
         cin>>m;
            ans=upper_bound(v.begin(),v.end(),m)-v.begin();
            //ans=distance(it,v.begin());
            cout<<ans<<endl;
        }
        //cout<<ans<<endl;

}
