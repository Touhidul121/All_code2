#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {
            cout<<(n/2)<<" "<<(n/2)<<"\n";
        }
        else
        {
            vector<int>ans;
            for(int i=3;i<=sqrt(n);i+=2)
            {
                if(n%i==0)
                {
                    ans.push_back(i);
                    ans.push_back(n/i);
                }
            }
            int res=1;
            for(int i=0;i<ans.size();i++)
            {

                if((n-ans[i])%ans[i]==0)
                {
                    res=max(ans[i],res);
                }
            }
            cout<<res<< " "<<n-res<<"\n";
        }
    }
}
