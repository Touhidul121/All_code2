#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a,x,i=0;
    cin>>n;
    string s;
    cin>>s;
    map<int,int>mp;
bool f=false;
    for(int i=1;i<10;i++)
        {
            cin>>a;
            mp[i]=a;
        }

    for( i=0;i<n;i++)
    {
        x=s[i]-'0';
        if(x>=mp[x]){
            cout<<x;
        }
        else{
            while(mp[x]>x && i<n)
            {
                cout<<mp[x];
                i++;
                x=s[i]-'0';
            }
            break;
        }
    }

    for(;i<n;i++)
        cout<<s[i];

    cout<<"\n";
}
