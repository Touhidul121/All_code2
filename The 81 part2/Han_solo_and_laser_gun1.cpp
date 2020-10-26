#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double n,x1,y1,m,x2,y2;
    cin>>n>>x1>>y1;
    map<double,int>mp;

    for(int i=0;i<n;i++)
    {
        cin>>x2>>y2;
        if(x2==x1)
            mp[100000.0]++;
        else
        {
            m=(y2-y1)/(x2-x1);
            mp[m]++;
        }
    }
    cout<<mp.size()<<"\n";
}
