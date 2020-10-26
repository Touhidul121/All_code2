#include<bits/stdc++.h>
using namespace std;
bool vis[1000][1000];
int n,m,k;
char grid[505][505];

void dfs(int x,int y)
{
    vis[x][y]=1;

    if(x-1>=1 && x-1<=n && y>=1 && y<=m && vis[x-1][y]==0 && grid[x-1][y]=='.')
        dfs(x-1,y);
    if(x>=1 && x<=n && y+1>=1 && y+1<=m && vis[x][y+1]==0 && grid[x][y+1]=='.')
        dfs(x,y+1);
    if(x+1>=1 && x+1<=n && y>=1 &&y<=m && vis[x+1][y]==0 && grid[x+1][y]=='.')
        dfs(x+1,y);
    if(x>=1 && x<=n && y-1>=1 && y-1<=m && vis[x][y-1]==0 && grid[x][y-1]=='.')
        dfs(x,y-1);
    if(k>0)
    {
        grid[x][y]='X';
        k--;
    }
}

int main()
{

   cin>>n>>m>>k;
    int x,y;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>grid[i][j];

            if(grid[i][j]=='.')
            {
                x=i;
                y=j;
            }
        }
    }

    dfs(x,y);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<grid[i][j];
        }
        cout<<"\n";
    }
}

