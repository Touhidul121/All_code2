#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;

    vector<int>v({4,8,15,16,23,42});//standard array
    vector<int>v1(n);
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
        v1[i]=lower_bound(v.begin(),v.end(),v1[i])-v.begin();//array to keep the position of the elements
    }

    vector<int>s(6);//vector to keep count of completed sequence

    for(int i=0;i<n;i++)
    {
        if(v1[i]==0)
            ++s[0];
        else
        {
            if(s[v1[i]-1]>0)
            {
                s[v1[i]-1]--;
                s[v1[i]]++;
            }
        }
    }
    cout<<n-s[5]*6<<endl;
}
