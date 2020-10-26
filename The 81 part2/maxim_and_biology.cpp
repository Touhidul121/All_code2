#include<bits/stdc++.h>
using namespace std;

int f(int n)
{
    int a=abs(n);
    return min(a,26-a);
}
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    vector<int>v;
    for(int i=0;i<=s.size()-4;i++)
    {
        string x=s.substr(i,4);

    cnt+=f(x[0]-'A');
    cnt+=f(x[1]-'C');
    cnt+=f(x[2]-'T');
    cnt+=f(x[3]-'G');
    v.push_back(cnt);
    cnt=0;
    }
cout<<*min_element(v.begin(),v.end())<<"\n";
}
