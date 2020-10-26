#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int ar[1001],K,cnt=0;

ll dp[15][100][100][2];

ll getsum(int pos,int num,int n,ll sum,bool flag)
{
    if(pos>n)
    {
        if(num%K==0 && sum%K==0)return 1;
        else return 0;
    }

    if(dp[pos][num][sum][flag]!=-1)return dp[pos][num][sum][flag];

    int limit=9;
    if(!flag)limit=ar[pos];

    ll res=0;

    for(int i=0;i<=limit;i++)
    {
        if(i<limit || flag)
            res+=getsum(pos+1,(num*10+i)%K,n,(sum+i)%K,true);
        else
            res+=getsum(pos+1,(num*10+i)%K,n,(sum+i)%K,false);
    }
    return dp[pos][num][sum][flag]=res;
}
int sum(string s)
{
    int res=0;
    for(char x:s)
        res+=x-'0';
    return res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,n;
    cin>>t;
    n=t;
    while(t--){


        string a,b;
        cin>>a>>b>>K;
        cout<<"Case "<<n-t<<": ";
        if(K>82)
            cout<<0<<"\n";
        else{
        int x=stoi(a);

        x--;
        a=to_string(x);

        ll L,R;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<a.size();i++)
        ar[i+1]=a[i]-'0';
        L=getsum(1,0,a.size(),0,0);

        memset(dp,-1,sizeof(dp));
        for(int i=0;i<b.size();i++)
        ar[i+1]=b[i]-'0';
        R=getsum(1,0,b.size(),0,0);
        cout<<R-L<<"\n";
        }
    }

}

