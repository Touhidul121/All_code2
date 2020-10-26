#include<bits/stdc++.h>
#define mod 10000007
using namespace std;

int a, b, c, d, e, f;
int dp[10001];
int fn( int n ) {
    //cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f;
    dp[0]=a;
    dp[1]=b;
    dp[2]=c;dp[3]=d;dp[4]=e;dp[5]=f;
    for(int i=6;i<=n;i++) dp[i]=(dp[i-1]%mod + dp[i-2]%mod + dp[i-3]%mod + dp[i-4]%mod+ dp[i-5]%mod+ dp[i-6]%mod)%mod;
    return dp[n];
}
int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
