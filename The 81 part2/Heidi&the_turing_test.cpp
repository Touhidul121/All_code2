#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin>>n;

    vector<pair<int,int>>v,v1;
    map<int,int>mp,mp1;
    for(int i=0;i<4*n+1;i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
        v1.push_back(make_pair(b,a));
        mp[a]++;
        mp1[b]++;
    }
    cout<<endl;
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    bool o=true;
    int x1=INT_MAX,x2=INT_MAX,y1=INT_MAX,y2=INT_MAX;
//for(int i=0;i<4*n+1;i++)
//    cout<<v[i].first<<" "<<v[i].second<<endl;
//    cout<<endl;
//for(int i=0;i<4*n+1;i++)
//    cout<<v1[i].first<<" "<<v1[i].second<<endl;
   for(int i=0;i<4*n+1;i++)
    {
     if(mp[v[i].first]>1&&o)
     {
      x1= v[i].first;
      o=false;
     }
     else if(mp[v[i].first]>1)
        x2=v[i].first;
    }
bool g=true;
    for(int i=0;i<4*n+1;i++)
    {
        if(mp1[v1[i].first]>1&&g)
        {
            y1=v1[i].first;
            g=false;
        }
        else if(mp1[v1[i].first]>1)
            y2=v1[i].first;
    }
if(x1==INT_MAX)
x1=v[0].first;
if(x2==INT_MAX)
x2=v[4*n].first;
if(y1==INT_MAX)
y1=v1[0].first;
if(y2==INT_MAX)
y2=v[4*n].first;
vector<int>v2;
v2.push_back(x1);
v2.push_back(x2);
v2.push_back(y1);
v2.push_back(y2);
sort(v2.begin(),v2.end());
//cout<<x1<<" "<<x2<<" "<<y1<<" "<<y2<<endl;
    for(int i=0;i<4*n+1;i++)
    {
        if(binary_search(v2.begin(),v2.end(),v[i].first)==0&&binary_search(v2.begin(),v2.end(),v[i].second)==0)
        {
            //cout<<"goes1"<<endl;
            cout<<v[i].first<<" "<<v[i].second<<endl;
            break;
        }


        else if(v[i].first==x1&&(v[i].second>y2||v[i].second<y1)){

            cout<<v[i].first<<" "<<v[i].second<<endl;
            break;
        }
            else if(v[i].first==x2&&(v[i].second>y2||v[i].second<y1)){

            cout<<v[i].first<<" "<<v[i].second<<endl;
            break;
            }
                    else if(v[i].first==y1&&v[i].second!=y2&&(v[i].second>x2||v[i].second<x1)){

             cout<<v[i].first<<" "<<v[i].second<<endl;
             break;

            }
            else if(v[i].first==y2&&v[i].second!=y1&&(v[i].second>x2||v[i].second<x1)){
             cout<<v[i].first<<" "<<v[i].second<<endl;
             break;
    }

}
//cout<<x1<<" "<<x2<<" "<<y1<<" "<<y2<<endl;
}
