#include<bits/stdc++.h>
using namespace std;
#define  ipair pair<int,int>
int main()
{
    int n,a,b;
    cin>>n;
    vector<ipair>v;
    for(int i=0;i<n;i++)
    {
       cin>>a>>b;
       v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    priority_queue<ipair,vector<ipair>,greater<ipair>>q;

     for(auto p:v)
     {

         if(q.empty())
         {
             q.push(p);
         }
         else if(q.top().second>p.first)
         {
             q.push(p);
         }
         else
         {

             q.pop();
             q.push(p);
         }
     }
     cout<<q.size()<<"\n";


}
