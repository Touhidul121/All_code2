#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nb,m,a;
    cin>>nb>>m;

    vector<int> v;
    int mx=0;

    for(int i=0;i<nb;i++)
    {
       cin>>a;
       v.push_back(a);
       if(mx<a)
            mx=a;
    }

    if(mx<=m)
        cout<<nb<<endl;
    else
    {
        for(int i=nb-1;i>=0;i--)
        {
            if(v[i]>m)
            {
                cout<<i+1<<endl;
                return 0;
            }
        }
    }

}
