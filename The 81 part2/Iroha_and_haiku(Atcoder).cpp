#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    if(arr[0]==5 && arr[1]==5 && arr[2]==7)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
}
