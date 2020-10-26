#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,flag=0;
    cin>>n;
    while(n--)
    {
     cin>>a;
     if(a==1)
            flag++;
    }
    if(flag>0)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;
}
