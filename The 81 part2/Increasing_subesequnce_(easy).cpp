#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0,j=n-1;
    int x=0;
string s;
while(i<=j)
{
    vector<pair<int,char>>v;

    if(a[i]>x)v.push_back(make_pair(a[i],'L'));
    if(a[j]>x)v.push_back(make_pair(a[j],'R'));

    sort(v.begin(),v.end());
    if(v.size()==2)
    {
        v.pop_back();
    }
    if(v.size()==1)
    {
        if(v[0].second=='L')
        {
            s+='L';
            x=a[i];
            i++;

        }
        else
        {
            s+='R';
            x=a[j];
            j--;
        }

    }
    else
        break;
}
cout<<s.size()<<"\n";
cout<<s<<"\n";
return 0;
}

