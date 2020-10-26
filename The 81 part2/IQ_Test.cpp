#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,count1=0,count2=0,odd_index,ev_index;
    cin>>n;
    vector<int> v;

    for(int i=0;i<n;i++)
    {
      cin>>a;
      v.push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]&1)
        {
            count1++;
            odd_index=i+1;
        }
        else
        {
            count2++;
            ev_index=i+1;
        }
    }
    if(count1>count2)
        cout<<ev_index<<endl;
    else
        cout<<odd_index<<endl;
}
