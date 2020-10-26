#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,a;
    cin>>n;
    bool f=false;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    int ind1,ind2;
    int mn=INT_MAX,mx=-1;
    if(n==2)
    {
        if(v[0]<=v[1]){
            mx=v[1];
            mn=v[0];
        }
        else
        {
            mx=v[0];
            mn=v[1];
        }
        if(mx-mn>=2)
            cout<<"YES"<<"\n";


    }
    for(int i=0;i<n;i++)
    {
        if(mn>v[i]){
            mn=v[i];
            ind1=i;
        }
        if(mx<v[i])
        {
          mx=v[i];
          ind2=i;
        }
        if(mx-mn>=abs(ind1-ind2)+1)
        {

            f=true;
            break;
        }

    }
    if(f){

    cout<<"YES"<<"\n";
    cout<<min(ind1,ind2)+1<<" "<<max(ind1,ind2)+1<<"\n";
    }
    else
    cout<<"NO"<<"\n";
    }

}
