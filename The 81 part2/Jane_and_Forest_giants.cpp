#include<bits/stdc++.h>
using namespace std;

bool vis[205][205];
int dist1[205][205];
int dist2[205][205];
vector<vector<int>>dist;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int m,n;
char grid[205][205];
int sj,ej,sf,ef;
vector<pair<int,int>>v;
void multisource_bfs()
{
    queue<pair<int,int>>q;
    for(int i=0;i<v.size();i++)
    {

        q.push({v[i].first,v[i].second});
        vis[v[i].first][v[i].second]=1;
        dist[v[i].first][v[i].second]=0;
    }

    while(!q.empty())
    {
     int curX=q.front().first;
        int curY=q.front().second;

        q.pop();
        for(int i=0;i<4;i++)
        {
          int newX=curX+dx[i];
          int newY=curY+dy[i];

          if(newX>=0 && newX<m && newY>=0 && newY<n && vis[newX][newY]==0 && grid[newX][newY]!='#'){
          dist[newX][newY]=dist[curX][curY]+1;
          vis[newX][newY]=1;
          q.push({newX,newY});
          }
        }
    }

}
void bfs(int x,int y)
{
    queue<pair<int,int>>q;
    q.push({x,y});
    vis[x][y]=1;
    dist[x][y]=0;

    while(!q.empty())
    {
        int curX=q.front().first;
        int curY=q.front().second;

        q.pop();
        for(int i=0;i<4;i++)
        {
          int newX=curX+dx[i];
          int newY=curY+dy[i];

          if(newX>=0 && newX<m && newY>=0 && newY<n && vis[newX][newY]==0 && grid[newX][newY]!='#'){
          dist[newX][newY]=dist[curX][curY]+1;
          vis[newX][newY]=1;
          q.push({newX,newY});
          }
        }
    }
}
map<pair<int,int>,int>mp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t,r=0;
    cin>>t;
    while(t--){
    r++;
    memset(vis,0,sizeof(vis));
    memset(dist1,0,sizeof(dist1));
    memset(dist2,0,sizeof(dist2));
    dist.assign(205,vector<int>(205,INT_MAX));

    cin>>m>>n;


    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>grid[i][j];
            if(i==0 || j==0 || i==m-1 || j==n-1)
            {
                mp[{i,j}]++;
            }
            if(grid[i][j]=='J')sj=i,ej=j;

            if(grid[i][j]=='F')v.push_back({i,j});

        }
    }

    bfs(sj,ej);
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        dist1[i][j]=dist[i][j];



    memset(vis,0,sizeof(vis));
    dist.assign(205,vector<int>(205,INT_MAX));

    multisource_bfs();

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        dist2[i][j]=dist[i][j];

    int mn=INT_MAX;

    for(auto x:mp)
    {
        if(dist1[x.first.first][x.first.second]==INT_MAX)continue;
        if(grid[x.first.first][x.first.second]!='#'){
        if(dist1[x.first.first][x.first.second]<dist2[x.first.first][x.first.second])
        {

            mn=min(mn,dist1[x.first.first][x.first.second]);
        }
        }
    }
    cout<<"Case "<<r<<": ";
    if(mn==INT_MAX)
        cout<<"IMPOSSIBLE\n";
    else cout<<mn+1<<"\n";
    mp.clear();
    v.clear();
    }

}
