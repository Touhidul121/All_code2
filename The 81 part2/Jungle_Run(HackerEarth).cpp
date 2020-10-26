#include<bits/stdc++.h>
using namespace std;

bool vis[100][100];
int dist[100][100];
char grid[100][100];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int n,m,startX,startY,endX,endY;
bool isValid(int i,int j)
{
    if(i<1 || i>n || j<1 || j>n)
        return false;
    if(vis[i][j]==1)
        return false;
    else
        return true;
}
void bfs(int srcX,int srcY)
{
    queue<pair<int,int>>q;
    q.push({srcX,srcY});
    dist[srcX][srcY]=0;
    vis[srcX][srcY]=1;

    while(!q.empty())
    {
        int curX=q.front().first;
        int curY=q.front().second;
        q.pop();

        for(int i=0;i<4;i++)
        {
            int newX=curX+dx[i];
            int newY=curY+dy[i];
            if(isValid(newX,newY))
            {
                dist[newX][newY]=dist[curX][curY]+1;
                vis[newX][newY]=1;
                q.push({newX,newY});
            }
        }
    }
}

int main()
{
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++){
            cin>>grid[i][j];
            if(grid[i][j]=='S')
            {
                startX=i;
                startY=j;
            }
            if(grid[i][j]=='E')
            {
                endX=i;
                endY=j;
            }
        }
    }
    bfs(startX,startY);
    cout<<dist[endX][endY]<<"\n";
}

