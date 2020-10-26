#include<bits/stdc++.h>
using namespace std;

#define maxN 1005
char grid[maxN][maxN];
int n,m;
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

int endX,endY;
bool flag=false;

pair<int,int> par[maxN][maxN];
int vis[maxN][maxN];

void bfs(int srcX,int srcY)
{
    par[srcX][srcY]={-1,-1};
    queue<pair<int,int>>q;
    q.push({srcX,srcY});
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

          if(newX>=0 && newX<n && newY>=0 && newY<m &&vis[newX][newY]==0 && grid[newX][newY]!='#')
          {
              vis[newX][newY]=1;
              par[newX][newY]={curX,curY};

              if(grid[newX][newY]=='B')
              {
                  endX=newX;
                  endY=newY;
                  flag=true;
                  return;
              }
              q.push({newX,newY});
          }
        }
    }

}
int main()
{
 cin>>n>>m;

 int startX,startY;

 for(int i=0;i<n;i++)
 {
     for(int j=0;j<m;j++)
     {
         cin>>grid[i][j];
         if(grid[i][j]=='A')
            startX=i , startY=j;
     }
 }
 bfs(startX,startY);

 if(flag==false)
 {
     cout<<"NO"<<"\n";

 }
else{
 vector<pair<int,int>>v;

 while(endX!=-1 && endY!=-1)
 {
     v.push_back({endX,endY});
     pair<int,int>p =par[endX][endY];
     endX=p.first;
     endY=p.second;
 }
 reverse(v.begin(),v.end());

 vector<char>ans;
 for(int i=1;i<v.size();i++)
 {
     int x=v[i-1].first;
     int y=v[i-1].second;
     int xx=v[i].first;
     int yy=v[i].second;

     if(xx==x)
     {
         if(yy>y)
            ans.push_back('R');
         else
            ans.push_back('L');
     }
     else if(yy==y)
     {
         if(xx>x)
            ans.push_back('D');
         else
            ans.push_back('U');
     }
 }
     cout<<"YES"<<"\n";
     cout<<ans.size()<<"\n";

     for(char x:ans)
        cout<<x;
     cout<<"\n";


}
}
