#include<bits/stdc++.h>
using namespace std;

#define maxN 1001
char grid[maxN][maxN];
int vis[maxN][maxN];
pair<int,int> par[maxN][maxN];
bool f=false;
int endx,endy;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int n,m;

void bfs(int srcx,int srcy)
{
    par[srcx][srcy]={-1,-1};
    vis[srcx][srcy]=1;
    queue<pair<int,int>>q;
    q.push({srcx,srcy});

    while(!q.empty())
    {
        int curx=q.front().first;
        int cury=q.front().second;
        q.pop();

        for(int i=0;i<4;i++)
        {
           int newx=curx+dx[i];
            int newy=cury+dy[i];

            if(newx>=0 && newx<n && newy>=0 && newy<m)
            {
              if(vis[newx][newy]==0 && grid[newx][newy]!='#'&& grid[newx][newy]!='M')
              {
                  vis[newx][newy]=1;
                  par[newx][newy]={curx,cury};
                  if(newx==0 || newx==n-1 || newy==0 || newy==m-1)
                  {
                      f=true;
                      endx=newx;
                      endy=newy;
                      return;
                  }
                  q.push({newx,newy});
              }
            }

        }
    }
}

int main()
{
    cin>>n>>m;
    int startx,starty;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
            if(grid[i][j]=='A')
                startx=i , starty=j;
        }
    }

    bfs(startx,starty);
    if(f==false)
    {
        cout<<"NO"<<"\n";
    }
    else
    {
        vector<pair<int,int>>v;
        while(endx!=-1 && endy!=-1)
        {
            v.push_back({endx,endy});
            pair<int,int> p=par[endx][endy];
            endx=p.first;
            endy=p.second;
        }
        reverse(v.begin(),v.end());
        vector<char>ans;

        for(int i=1;i<v.size();i++)
        {
            int prevx=v[i-1].first;
            int prevy=v[i-1].second;
            int curx=v[i].first;
            int cury=v[i].second;

            if(prevx==curx)
            {
                if(cury>prevy)
                    ans.push_back('R');
                else
                    ans.push_back('L');
            }
            else if(prevy==cury)
            {
                if(curx>prevx)
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

