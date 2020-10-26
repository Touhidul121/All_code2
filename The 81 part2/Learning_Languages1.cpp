#include<bits/stdc++.h>
using namespace std;

int const N=1e2+5;


int n,m,k,ans,a,b,c;
int par[N];
bool vis[N];
unordered_set<int> st,st1;
vector<int>adj[105];

int find(int child)
{
    if(child==par[child])
        return child;
    return par[child]=find(par[child]);
}

void merge(int a,int b)
{
    a=find(a);
    b=find(b);
    if(a!=b)
        par[a]=b;
}

int main()
{

    scanf("%d %d",&n, &m);
    for(int i=1;i<=m;i++)
        par[i]=i;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&k);

        if(k--)
        {
            cin>>a;
            vis[a]=1;
        }
        else
            ans++;



            for(int j=0;j<k;j++)
            {
                cin>>b;
                merge(a,b);
                vis[b]=1;
                a=b;
            }

    }
    for(int i=1;i<=m;i++)
        {
            if(vis[i]==1)
            {
                st.insert(find(i));
            }
        }
    if(st.size())
        ans+=st.size()-1;

    printf("%d\n",ans);



    return 0;
}

