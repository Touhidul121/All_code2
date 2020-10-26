#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,count=0,r,y,z;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        s.insert(a);
    }
 y=*s.begin();
    z=*s.rbegin();
    if(s.size()>3)
    cout<<-1<<endl;

     else{
    if(s.size()==1)
        cout<<0<<endl;
    else if(s.size()==2)
    {
        if((y-z)%2!=0)
            cout<<z-y<<endl;

        else

            cout<<(z-y)/2<<endl;
        }

    else
    {
        count=0;
        for(auto x:s)
        {
            count++;
            if(count==2)
            {
                r=x;
                break;
            }
        }
        y=r-*s.begin();
        z=*s.rbegin()-r;

        if(y==z)
            cout<<y<<endl;
        else
            cout<<-1<<endl;

    }
    s.clear();
     }
    }

