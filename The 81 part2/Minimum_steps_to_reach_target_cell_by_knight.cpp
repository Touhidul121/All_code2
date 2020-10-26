#include<bits/stdc++.h>
using namespace std;
#define maxN 1001

int n,startX,startY,endX,endY;
int grid[maxN][maxN];
int vis[maxN][maxN];
int dist[maxN][maxN];
int dx[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int dy[] = { -1, -2, -2, -1, 1, 2, 2, 1 };

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

        for(int i=0;i<8;i++)
        {
            int newX=curX+dx[i];
            int newY=curY+dy[i];

            if(newX>=1 && newX<=n && newY>=1 && newY<=n && vis[newX][newY]==0)
            {
                dist[newX][newY]=dist[curX][curY]+1;
                vis[newX][newY]=1;
                if(newX==endX && newY==endY)return;
                q.push({newX,newY});

            }
        }
    }
}

int main()
{
    cin>>n;
    cin>>startX>>startY>>endX>>endY;
    bfs(startX,startY);
    pair<int,int>A={startX,startY};
    pair<int,int>B={endX,endY};
    if(A!=B && dist[endX][endY]==0)cout<<"Unreachable"<<"\n";
    else
    cout<<dist[endX][endY]<<"\n";
}
