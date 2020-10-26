#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int a,b,stock;
    cin>>a>>b>>stock;
    string s;
    cin>>s;
    int l=s.size(),cost=0,q=l,i;
    for(i=l-2;i>=0;i--)
    {
        while(i>=1&&s[i]==s[i-1])
            i--;
        if(s[i]=='A')
            cost+=a;
        else
            cost+=b;
        if(cost>stock||i==0)
            break;
            q=i+1;
    }

    if(cost<=stock)
        q=i+1;
    cout<<q<<"\n";
    }
}
