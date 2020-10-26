#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ll long long
#define si(n) scanf("%d",&n);
#define PI acos(-1.0)
#define sl(n) scanf("%lld",&n);
#define sf(n) scanf("%lf",&n);
#define ss(n) scanf("%s",n);
#define for0(i,n) for(ll i=0;i<n;i++)
#define for1(i,n) for(ll i=1;i<=n;i++)
#define forc(i,j,n) for(ll i=j;i<n;i++)
#define pb push_back
#define sor(n) sort(n.begin(),n.end())
#define sorcmp(n) sort(n.begin(),n.end(),cmp)
#define rev(n) reverse(n.begin(),n.end())
#define pi(x)  printf("%d",x);
#define pl(x)  printf("%lld",x);
#define pf(x)  printf("%.10lf",x);
#define ps(x)  printf("%s",x);
#define en() printf("\n");
#define random_shuffle(r...)random_shuffle(r,[](int _){return rand()%_;})
#define SQR(a) (a)*(a)
#define sp(x) fixed<<setprecision(x)
#define mod 1000000007
#define endl '\n'
#define pii pair<int,int>
#define pll pair<ll,ll>
#define bug cout<<"Here"<<endl
void fastio(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
template <typename T> T POW(T B,T P){ if(P==0) return 1; if(P&1) return B*POW(B,P-1);  else return SQR(POW(B,P/2));}
ll powmod(ll a, ll b){ll ans = 1;while(b){if(b&1) ans = ans*a%mod;a = a*a%mod;b >>= 1;}return ans;}

#define mxn 1005
char arr[mxn][mxn];
int n,m;
ll dx[] = { 1, -1, 0, 0};
ll dy[] = { 0, 0, 1, -1};

int fx,fy;
bool flag=false;

pii par[mxn][mxn];
int vis[mxn][mxn];

void bfs(int x,int y)
{
    par[x][y]={-1,-1};
    vis[x][y]++;
    queue<pii>q;
    q.push({x,y});

    while(!q.empty())
    {
        pii p=q.front();
        q.pop();
        int x=p.first;
        int y=p.second;

        for(int i=0;i<4;i++)
        {
            int xx=x+dx[i];
            int yy=y+dy[i];

            if(xx>=0 && xx<n && yy>=0 && yy<=m && vis[xx][yy]==0  && arr[xx][yy]!='#' )
            {
                vis[xx][yy]++;
                par[xx][yy]={x,y};

                if(arr[xx][yy]=='B')
                {
                    fx=xx;
                    fy=yy;
                    flag=true;
                    return ;
                }

                q.push({xx,yy});
            }
        }
    }
}




int main(){
//fastio();

    cin>>n>>m;
    int sx,sy;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='A')
            {
                sx=i;
                sy=j;
            }
        }
    }

    bfs(sx,sy);

    if(flag==false)
    {
        cout<<"NO"<<endl;
        return 0;
    }


    vector<pii>v;


    while(fx!=-1 && fy!=-1)
    {
        v.pb({fx,fy});
        pii p=par[fx][fy];
        fx=p.first;
        fy=p.second;
    }
    reverse(v.begin(),v.end());

    vector<char>ans;
    for(int i=1;i<v.size();i++)
    {
        int x=v[i-1].first;
        int y=v[i-1].second;
        int xx=v[i].first;
        int yy=v[i].second;

        if(x==xx)
        {
            if(y<yy) ans.pb('R');
            else ans.pb('L');
        }
        else if(y==yy)
        {
            if(x<xx) ans.pb('D');
            else ans.pb('U');
        }
    }


     cout<<"YES"<<endl;
     cout<<ans.size()<<endl;

     for(auto u:ans) cout<<u;



return 0;
}
