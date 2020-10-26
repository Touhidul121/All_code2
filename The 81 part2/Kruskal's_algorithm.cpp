#include<bits/stdc++.h>
using namespace std;

struct edge{
int a;
int b;
int w;
};

edge ar[100001];
int par[10001];

bool comp(edge a,edge b)
{
    return a.w<b.w;
}

int find(int a)
{
    if(par[a]==-1)
        return a;
    return par[a]=find(par[a]);
}

void join(int a,int b)
{
    par[a]=b;
}
int main()
{
    int n,m,a,b;
    cin>>n>>m;
    long long sum=0;

    for(int i=1;i<=n;i++)
        par[i]=-1;

    for(int i=0;i<m;i++)
    {
        cin>>ar[i].a;
        cin>>ar[i].b;
        cin>>ar[i].w;
    }
    sort(ar,ar+m,comp);

    for(int i=0;i<m;i++)
    {
        a=find(ar[i].a);
        b=find(ar[i].b);

        if(a!=b)
        {
            sum+=ar[i].w;
            join(a,b);

        }
    }
    cout<<sum<<"\n";
}
