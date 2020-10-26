#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    string a;
    vector<string>v;


    for(int i=0;i<n;i++)
    {
        cin>>a; // sonkha k amra string hisebe input nite pari
        v.push_back(a);
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            string a="",b="";
            a=v[j]+v[i];
            b=v[i]+v[j];
            if(a>b)
            {
                swap(v[i],v[j]);
            }
        }
    }
    for(string s:v)
        cout<<s;
    cout<<"\n";
}
