#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    set<int> s;
    int a;
    cin>>a;
    s.insert(a);
    for(int i=0;i<n-1;i++)
    {
        cin>>a;
        if(a>*s.rbegin()||a<*s.begin())
            count++;
        s.insert(a);
    }
    cout<<count<<endl;
}
