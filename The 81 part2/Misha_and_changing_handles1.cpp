#include<bits/stdc++.h>
using namespace std;
vector<int>adj[2005];
int vis[2005];
int cnt;
void dfs(int node)
{
 vis[node]=1;
 cnt=node;
 for(int child:adj[node])
 {
     if(!vis[child])
        dfs(child);
 }
}
int main()
{
    map<string,int>mp;
    int n,f=0;
    cin>>n;
    string s1,s,s2;
    for(int i=1;i<=n;i++)
    {
        cin>>s1>>s2;


            if(mp.count(s1)==0)
            {
                f++;
                mp[s1]=f;

            }
            if(mp.count(s2)==0)
            {
                f++;
                mp[s2]=f;
            }
            adj[mp[s1]].push_back(mp[s2]);

    }
    int ans=1;
     vector<pair<int,int>>v;
    for(int i=1;i<=f;i++)
    {

            if(vis[i]==0){
           cnt=0;
           dfs(i);
           v.push_back({i,cnt});


            }

    }
    cout<<v.size()<<"\n";
    string s3,s4;
    for(int i=0;i<v.size();i++)
    {
        for(auto x:mp)
        {

            if(x.second==v[i].first)
                s3=x.first;
                if(x.second==v[i].second)
                s4=x.first;
        }
        cout<<s3<<" "<<s4<<"\n"; // old password -> new password

    }


}

