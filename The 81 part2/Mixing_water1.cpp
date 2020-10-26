#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        ll h,c,t;
        cin>>h>>c>>t;
        map<int,int>mp;
        map<int,int>::iterator it;
        for(int i=0;i<1000;i++)
        {
            for(int j=0;j<1000;j++)
            {
                ll ans=(h*i+c*j)/2;
                mp.insert(make_pair(abs(ans-t),i+j));
            }
        }
        for(auto x:)
        vector<ll>v;
        it=mp.begin();
        ll res=it->first;
        for(auto x:mp)
        {
            if(x.first==res)
                v.push_back(x.second);
        }
        cout<<*min_element(v.begin(),v.end())<<"\n";
    }
}
