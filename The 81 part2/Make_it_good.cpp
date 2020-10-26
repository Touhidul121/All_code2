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
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        v.push_back(-1);
        int i=n,cnt=0;
        while(v[i-1]>=v[i]&& i>=1){
                cnt++;
        i--;
        }
        if(i>0)
        {
            while(v[i-1]<=v[i]&&i>=1)
            {
                cnt++;
                i--;
            }
        }
        cout<<n-cnt<<"\n";
    }
}
