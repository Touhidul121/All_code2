#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    vector<int>v,v1,v2,v3;
    int prev=0,cnt1=0,cnt2=1;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
        if(a>=prev)
            cnt1++;
        if(a<prev)
          cnt2++;
          prev=a;
    }
    int mx=*max_element(v.begin(),v.end());
    if(cnt1==n)
        cout<<0<<"\n";
    else if(cnt2==n)
        cout<<n-1<<"\n";
        else if(cnt1==n-1 && v[0]==mx)
            cout<<n-1<<"\n";
            else if(v[1]>v[0])
            {
                int i=1;
                v1.push_back(v[0]);
                while(v[i]>v[i-1])
                {
                    v1.push_back(v[i]);
                    i++;
                }
                for(;i<n;i++)
                    v2.push_back(v[i]);
                for(int i=0;i<v2.size();i++)
                    v3.push_back(v2[i]);
                for(int i=0;i<v1.size();i++)
                    v3.push_back(v1[i]);
                    int cnt=1;
                for(int i=0;i<v3.size()-1;i++)
                {
                    if(v3[i]<=v3[i+1])
                        cnt++;
                }
                if(cnt==n)
                    cout<<v2.size()<<"\n";
                else
                    cout<<-1<<"\n";
            }
    else
    {
        cout<<-1<<"\n";
    }

}
