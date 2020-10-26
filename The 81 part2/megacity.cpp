#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,x,a,b;
    cin>>n>>k;

    multimap<pair<int,int>,int>mp;
    vector<pair<int,int>>v;

    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>x;
        if(a<0)
            a=-a;
        if(b<0)
            b=-a;
        mp.insert(pair<pair<int,int>,int>((make_pair(a,b),x)));
    }
}
