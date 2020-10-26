#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    if(n%2==0||((n-2)/2)==0)
        cout<<"NO"<<endl;
    else
    {
        cout<<1<<" "<<((n-2)/2)<<endl;
    }
}
