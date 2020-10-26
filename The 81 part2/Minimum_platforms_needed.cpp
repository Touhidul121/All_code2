#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,a,b;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back({a,b});
    }
    vector<int> start,depart;

    for(pair<int,int> x:v)
    {
        start.push_back(x.first);
        depart.push_back(x.second);
    }

    sort(start.begin(),start.end());
    sort(depart.begin(),depart.end());

    int platform_needed=1,res=1;

    int i=1,j=0;
    while(i<n && j<n)
    {
       if(start[i]<=depart[j])
       {
           i++;
           platform_needed++;

           if(platform_needed>res)
            res=platform_needed;
       }
       else
       {
           platform_needed--;
           j++;
       }

    }
    cout<<res<<"\n";

}
