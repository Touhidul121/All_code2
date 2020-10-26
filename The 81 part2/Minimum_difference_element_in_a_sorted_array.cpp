#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int floor_of_key(int lo,int hi,int key)
{
    int res=-1;
    while(lo<=hi)
    {
        int mid=(lo+hi)/2;
        if(v[mid]<key)
        {
            res=v[mid];
            lo=mid+1;
        }
        else hi=mid-1;
    }
    return res;
}

int ceil_of_key(int lo,int hi,int key)
{
    int res=-1;
    while(lo<=hi)
    {
        int mid=(lo+hi)/2;
        if(v[mid]>key)
        {
            res=v[mid];
            hi=mid-1;
        }
        else lo=mid+1;
    }
    return res;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);

int n,a;
cin>>n;

for(int i=0;i<n;i++)cin>>a , v.push_back(a);

int key;
cin>>key;
if(binary_search(v.begin(),v.end(),key)) // if key is present in the array
    cout<<key<<"\n";
else
{
    int x=floor_of_key(0,n-1,key);
    int y=ceil_of_key(0,n-1,key);

    if(abs(key-x)<abs(key-y))
        cout<<x<<"\n";
    else
        cout<<y<<"\n";

}
}
