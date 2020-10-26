#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<int>v[100005];

int main()
{
   int  n,r,x;
   cin>>n;
   vector<pair<int,int>> vp;
  // vector<vector<int>> v[INT_MAX]={0};

   for(int i=0;i<n;i++)
   {
       cin>>x;
       v[x].push_back(i);
   }

   for(int i=0;i<100005;i++)
   {

       if(v[i].size()==1)
       {
         vp.push_back(make_pair(i,0));
       }
      else if(v[i].size()>1)
        {
            //sort(v[i].begin(),v[i].end());
       bool o=true,p;
       r=v[i][1]-v[i][0];

       for(int j=1;j<v[i].size();j++)
       {
           p=(v[i][j]-v[i][j-1])==r;

           if(p==false)
           {
               o=false;
           }
       }

        if(o)
         vp.push_back(make_pair(i,r));
        }

      }

    cout<<vp.size()<<endl;
   for(int i=0;i<vp.size();i++)
   {
       cout<<vp[i].first<<" "<<vp[i].second<<endl;
   }
}
