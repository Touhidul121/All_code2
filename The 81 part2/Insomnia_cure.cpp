#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,l,m,n,d,count=0,x;
    cin>>k>>l>>m>>n>>d;
    vector<int> v1;
    set<int> s;

    for(int i=1;i<=d;i++)
        v1.push_back(i);


    s.insert(k);
    s.insert(l);
    s.insert(m);
    s.insert(n);

    for(auto x:s)
    {



    for(int j=0;j<v1.size();j++)
    {

        if(v1[j]%x==0)
        {
            count++;
            v1[j]=-1;
        }

    }

    }
    cout<<count<<endl;
        }

