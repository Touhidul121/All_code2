#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,x,y,z;
    cin>>n;
    set<int>st;
    for(int i=0;i<n;i++){
        cin>>a;
        st.insert(a);

    }
    if(st.size()==1)
        cout<<0<<"\n";
    else if(st.size()==2)
    {
        x=*st.begin();
        y=*st.rbegin();
        int diff=y-x;
        if(diff%2==0)
            cout<<diff/2<<"\n";
        else
            cout<<diff<<"\n";
    }
    else if(st.size()==3)
    {
        x=*st.begin();
        z=*st.rbegin();
        int i=0;
        for(auto x:st)
        {
            if(i==1)
            {
                y=x;
                break;
            }
            i++;
        }
        if(y-x==z-y)
            cout<<y-x<<"\n";
        else
            cout<<-1<<"\n";
    }
    else
        cout<<-1<<"\n";
}
