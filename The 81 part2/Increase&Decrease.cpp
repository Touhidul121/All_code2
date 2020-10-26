#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;

    vector<int>v(n+5);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }

    if(sum%n==0)
        cout<<n<<endl;
    else
        cout<<n-1<<endl;
}
