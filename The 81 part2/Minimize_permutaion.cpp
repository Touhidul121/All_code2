#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        vector<int>v,v1;
        vector<int>p(n+1);
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            p[a]=i;
        }
        v1=v;
        sort(v1.begin(),v1.end());
        int count=0,flag=0;
        for(int i=0;i<n;i++)
        {

        int loc=p[v1[i]];
          if(count==n-1)
            break;
          while(count<n-1&&v[i]!=v1[i]&&loc>0)
          {
              count++;
              swap(v[loc],v[loc-1]);

              loc--;
          }


        }
        for(auto x:v)
            cout<<x<<" ";
            cout<<"\n";
    }
}
