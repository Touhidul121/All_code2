#include<bits/stdc++.h>
using namespace std;

bool vis[9][9];
int dist[9][9],endX,endY;
int dx[]={-2,-1,1,2,1,2,-1,-2};
int dy[]={1,2,2,1,-2,-1,-2,-1};
bool isValid(int i,int j)
{
    if(i<1 || i>8 ||j<1 || j>8)
        return false;
    if(vis[i][j]==1)
        return false;
    return true;
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
        if(curX==endX && curY==endY)
            return;
        q.pop();
        for(int i=0;i<8;i++)
        {
          int newX=curX+dx[i];
          int newY=curY+dy[i];

          if(isValid(newX,newY)){
          dist[newX][newY]=dist[curX][curY]+1;
          vis[newX][newY]=1;
          q.push({newX,newY});
          }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        for(int i=1;i<=8;i++)
        {
         for(int j=1;j<=8;j++)
         {
             vis[i][j]=0;
         }
        }

        string a,b;
        cin>>a>>b;
        int startX,startY;
        startX=a[0]-'a'+1;
        startY=a[1]-'0';
        endX=b[0]-'a'+1;
        endY=b[1]-'0';
       bfs(startX,startY);
       cout<<dist[endX][endY]<<"\n";

    }
}
