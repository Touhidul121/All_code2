#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    bool f1=true,f2=true;
    int cnt_odd=0,cnt_ev=0,ind1,ind2;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if((a&1)&&f1)
        {
            ind1=i+1;
            f1=false;
        }
        if(!(a&1)&&f2)
        {
            ind2=i+1;
            f2=false;
        }
        if(a&1)
            cnt_odd++;
        else
            cnt_ev++;
    }
    if(cnt_odd>cnt_ev)
        cout<<ind2<<"\n";
    else
        cout<<ind1<<"\n";
}
