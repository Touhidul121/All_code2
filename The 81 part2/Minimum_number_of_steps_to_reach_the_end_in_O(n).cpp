#include<bits/stdc++.h>
using namespace std;
#define maxN 100001
int arr[maxN],n;

int solve()
{
    if(n<=1)return 0;
    if(arr[0]==0)return -1; // if value at first index is 0 then it's not possible to reach the end because we must go via first index

    int max_reachable=arr[0];
    int steps=arr[0];
    int jumps=1;

    for(int i=1;i<n;i++)
    {
        if(i==n-1)
            return jumps;

        max_reachable=max(max_reachable,i+arr[i]);

        steps--;
        if(steps==0)
        {
            jumps++;

            if(i>=max_reachable) //
                return -1;
            steps=max_reachable-i;
        }

    }
    return -1;
}
int main()
{
 cin>>n;
 for(int i=0;i<n;i++)cin>>arr[i];

 cout<<solve()<<"\n";
}
