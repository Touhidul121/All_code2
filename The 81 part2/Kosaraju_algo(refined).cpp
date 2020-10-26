#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1000];
vector<int>rev[1000];
int vis[1000],n;
stack<int>stk;

void dfs1(int node)
{
    vis[node]=1;
    for(int child:adj[node])
        if(!vis[child])
        dfs1(child);

    stk.push(node);
}

void reverse()
{
    for(int i=0;i<n;i++)
    {
        for(int child:adj[i])
        {
            rev[child].push_back(i);
        }
    }
}

void dfs2(int node)
{
    cout<<node<<" ";
    vis[node]=1;
    for(int child:rev[node])
    {
        if(!vis[child])
            dfs2(child);
    }
}
void find_SSC()
{

    for(int i=0;i<n;i++)
        if(!vis[i])
        dfs1(i);

    reverse();
    memset(vis,0,sizeof(vis));
    cout<<"Strongly Connected components are\n";
    while(!stk.empty())
    {
        int cur=stk.top();
        stk.pop();
        if(vis[cur]==0)
        {
            dfs2(cur);
            cout<<"\n";
        }
    }
}
int main()
{
    int e,a,b;
    cin>>n>>e;

    for(int i=1;i<=e;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);

    }

    find_SSC();
}
