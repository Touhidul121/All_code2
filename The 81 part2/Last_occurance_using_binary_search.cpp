#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,a;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)cin>>a , v.push_back(a);
    int x;
    cin>>x;
    int ind=-1;
    int l=0,h=n-1;
    while(l<=h)
    {

        int mid=(l+h)/2;
        if(v[mid]==x)
            ind=mid , l=mid+1;
        else if(x<v[mid])
            h=mid-1;
        else l=mid+1;
    }
    if(ind!=-1)
        cout<<ind<<"\n";
    else cout<<"NO"<<"\n";
}

