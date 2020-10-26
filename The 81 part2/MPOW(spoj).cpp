#include<bits/stdc++.h>
using namespace std;

#define N 101
#define mod 1000000007
typedef long long ll;
ll ar[N][N], I[N][N];


void mul(ll A[][N],ll B[][N],ll dim)
{
    ll res[dim+1][dim+1];

    for(int i=1;i<=dim;i++)
    {
        for(int j=1;j<=dim;j++)
        {
            res[i][j]=0;

            for(int k=1;k<=dim;k++)
            {
                ll x=A[i][k]*B[k][j];
                res[i][j]=(res[i][j]+x)%mod;
            }
        }
    }

    for(int i=1;i<=dim;i++)
    {
        for(int j=1;j<=dim;j++)
        {
            A[i][j]=res[i][j];
        }
    }
}
void power(ll A[][N],ll dim,ll n)
{
  for(int i=1;i<=dim;i++)
  {
      for(int j=1;j<=dim;j++)
      {
          if(i==j)
            I[i][j]=1;
          else
            I[i][j]=0;
      }
  }

  while(n>0)
  {
      if(n&1)
      mul(I,A,dim),n--;
      n=n/2;
      mul(A,A,dim);

  }

  for(int i=1;i<=dim;i++)
  {
      for(int j=1;j<=dim;j++)
      {
          A[i][j]=I[i][j];
      }
  }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    ll dim,n;
   cin>>dim>>n;

   for(int i=1;i<=dim;i++)
    for(int j=1;j<=dim;j++)
    cin>>ar[i][j];
   power(ar,dim,n);

   for(int i=1;i<=dim;i++)
   {
       for(int j=1;j<=dim;j++)
       {
           cout<<ar[i][j]<<" ";
       }
       cout<<"\n";
   }
    }

}
