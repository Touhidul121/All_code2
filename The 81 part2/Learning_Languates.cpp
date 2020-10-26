#include<bits/stdc++.h>
using namespace std;

int const N=1e2+5, M=1e5+5, OO = 0x3f3f3f3f, MOD=1e9+7;


int n,m,k,ans,a,b;
int par[N];
bool vis[N];
unordered_set<int> st;

int findParent(int u)
{
    while(u!=par[u])
        u=par[u];
    return u;
}

void join(int a, int b)
{
    a=findParent(a);
    b=findParent(b);
    if(a!=b)
        par[b]=a;
}



int main()
{
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    scanf("%d %d",&n, &m);
    for(int i=0;i<=m;i++)
        par[i]=i;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&k);
        if(k--)
        {
            scanf("%d",&a);
            vis[a]=1;
        }
        else
            ans++;
        for(int i=0; i<k; i++)
        {
            scanf("%d",&b);
            vis[b]=1;
            join(a,b);
            a=b;
        }
    }
    for(int i=1; i<=m; i++)
            if(vis[i])
                st.insert(findParent(i));
    if(st.size()>0)
    ans+=st.size()-1;
    printf("%d\n",ans);



    return 0;
}
