#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
 ios::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);

 map<int,int>x,y;
 int n,m,t,a,b;

 cin>>t;
 while(t--)
 {
     cin>>n;
     x.clear(),y.clear();

     for(int i=1;i<4*n;i++)
     {
         cin>>a>>b;
         x[a]++ ,y[b]++;
     }

     for(auto it=x.begin();it!=x.end();it++)
     {
         if(it->second%2)
         {
             a=it->first;
             break;
         }
     }

     for(auto it=y.begin();it!=y.end();it++)
     {
         if(it->second%2)
         {
             b=it->first;
             break;
         }
     }
     cout<<a<<" "<<b<<"\n";
 }
}
