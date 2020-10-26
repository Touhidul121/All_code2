#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a;
    cout<<"Enter array length"<<"\n";
    cin>>n;
    vector<int>v;
    bool flag=false,flag1=false;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a>=0)
            flag=true;
        else
            flag1=true;
        v.push_back(a);
    }
    if(!flag)
        cout<<*max_element(v.begin(),v.end())<<"\n";
    else{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>=0)
            sum+=v[i];
    }
    cout<<sum<<"\n";
   } }

