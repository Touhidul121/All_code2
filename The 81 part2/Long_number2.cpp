#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pi 2*acos(0.0)
#define f first
#define s second
#define gap ' '

ll mod=1000000007;
int num[100010];

int main()
{
    int n;
    string s;
    cin>> n>>s;
    int ara[11];
    for(int i=1;i<10;i++)
    {
        cin>> ara[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {

        if(s[i]-'0'<ara[s[i]-'0'])
        {
            cnt=i;

            break;
        }

    }
    //cout<< cnt;

    for(int i=cnt;i<n;i++)
    {

        if(s[i]-'0'>ara[s[i]-'0'])
        {

            break;
        }
        else{
            s[i]=ara[s[i]-'0']+'0';
        }
    }
    cout<<s;
}
