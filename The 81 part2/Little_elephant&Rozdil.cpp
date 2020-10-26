#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    multiset<int>s;

    int a,m;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
        s.insert(a);
    }
    m=*s.begin();
    if(s.count(m)>1)
        cout<<"Still  Rozdil"<<endl;
    else
    {

        for(int i=0;i<n;i++)
        {
            if(m==v[i])
            {
                cout<<i+1<<endl;
                return 0;
            }
        }
    }
}
