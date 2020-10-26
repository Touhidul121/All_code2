#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll res[1000005],phi[1000005];

void init()
{
    int mx=1000000;
    for(int i=1;i<=mx;i++)
        phi[i]=i;

    for(int i=2;i<=mx;i++)
    {
        if(phi[i]==i)
        {
            for(int j=i;j<=mx;j+=i)
            {
                phi[j]=phi[j]/i;
                phi[j]=phi[j]*(i-1);
            }
        }
    }

    for(int i=1;i<=mx;i++)
    {
        for(int j=i;j<=mx;j+=i)
        {
            res[j]+=phi[i]*i;
        }
    }
}
int main()
{
  init();
  int q;
  cin>>q;
  while(q--)
  {
      int n;
      cin>>n;
      ll ans=(res[n]-1)*n;
      ans/=2;
      ans+=n;
      cout<<ans<<"\n";
  }
}
