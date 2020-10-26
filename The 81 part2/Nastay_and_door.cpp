#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
    int n,k;
    cin>>n>>k;
    int ar[n+5];
    for(int i=1;i<=n;i++)
        cin>>ar[i];
    vector<int>pref(n+5);
    for(int i=1;i<n;i++)
    {
        if(ar[i]>ar[i-1]&&ar[i]>ar[i+1]){
            pref[i]=1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        pref[i]=pref[i]+pref[i-1];
    }

    int mx=1,ind=1;
    for(int i=1;i<=n-(k-1);i++)
    {
      int a=i;
      int b=i+k-1;
      int p=pref[b-1]-pref[a];
      p++;
      if(mx<p){
            mx=p,ind=i;
      }
    }
    cout<<mx<<" "<<ind<<"\n";
    }
}

