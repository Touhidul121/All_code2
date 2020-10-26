#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    int a;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int sum=0;

    int x=*max_element(v.begin(),v.end());

    if(x&1)
    {
        int res=(x+1)/2;

        for(int i=0;i<n;i++)
        {
            if(v[i]<res)
            {
                sum+=(res-v[i]);
            }
        }
        cout<<sum<<"\n";
    }

     else{   int res=x/2;

        for(int i=0;i<n;i++)
        {
            if(v[i]<res)
            {
                sum+=(res-v[i]);
            }
        }
        cout<<sum<<"\n";
     }

}
