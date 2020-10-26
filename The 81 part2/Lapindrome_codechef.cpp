#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector<char>v1,v2;
        int n=s.size();
        int i;
        if(n%2==0)
        {

            for( i=0;i<n/2;i++)
            {
                v1.push_back(s[i]);
            }
            for(;i<n;i++)
                v2.push_back(s[i]);
        }
        else
        {
            for( i=0;i<n/2;i++)
                v1.push_back(s[i]);
            i++;
            for(;i<n;i++)
                v2.push_back(s[i]);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());

        if(v1==v2)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";

    }
}
