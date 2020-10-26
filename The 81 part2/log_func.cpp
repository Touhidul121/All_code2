#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int res=0;
    while(pow(2,res)<n)
    {
        res++;
    }
    cout<<res<<"\n";
}
