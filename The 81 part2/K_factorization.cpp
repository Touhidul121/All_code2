#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int x=n;
    vector<int>ar;
for(int i=2;i<=n;i++){

        while(n%i==0)
        {
         ar.push_back(i);
         n=n/i;
        }

    }
    if(ar.size()<k)
        cout<<-1<<"\n";
    else
    {
        int a,b;
        while(ar.size()>k)
        {
            a=ar.back();
            ar.pop_back();
            b=ar.back();
            ar.pop_back();
            ar.push_back(a*b);
        }
        for(auto x:ar)
            cout<<x<<" ";
        cout<<"\n";

    }
}
