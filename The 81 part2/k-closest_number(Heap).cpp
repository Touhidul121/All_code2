#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>

int main()
{
    int n,a;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)cin>>a , v.push_back(a);

    priority_queue<pii,vector<pii>,greater<pii>>pq;

    int k,x;
    cin>>k>>x;
    for(int i=0;i<n;i++)
    {
        pq.push({abs(x-v[i]),v[i]});
    }
    int i=0;
    while(i<k)
    {
        cout<<pq.top().second<<" ";
        pq.pop();
        i++;
    }
    cout<<"\n";
}
