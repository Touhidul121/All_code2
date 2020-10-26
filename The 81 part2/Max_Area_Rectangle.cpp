#include<bits/stdc++.h>
using namespace std;

int MAH(vector<int>arr){
    int n=arr.size();
    vector<int>left;
    stack<pair<int,int>>stk1;
    int pseudoindex=-1;

    for(int i=0;i<n;i++)
    {
        if(stk1.size()==0)
            left.push_back(pseudoindex);
        else if(stk1.top().first<arr[i])
            left.push_back(stk1.top().second);
        else
        {
            while(stk1.size()>0 && stk1.top().first>=arr[i])
                stk1.pop();
            if(stk1.size()==0)
                left.push_back(pseudoindex);
            else
                left.push_back(stk1.top().second);
        }
        stk1.push({arr[i],i});
    }

    vector<int>right;
    stack<pair<int,int>>stk2;
    int pseudoindex1=n;

       for(int i=n-1;i>=0;i--)
    {
        if(stk2.size()==0)
            right.push_back(pseudoindex1);
        else if(stk2.top().first<arr[i])
            right.push_back(stk2.top().second);
        else
        {
            while(stk2.size()>0 && stk2.top().first>=arr[i])
                stk2.pop();
            if(stk2.size()==0)
                right.push_back(pseudoindex1);
            else
                right.push_back(stk2.top().second);
        }
        stk2.push({arr[i],i});
    }
    reverse(right.begin(),right.end());
    vector<int>ans;
    int x;

    for(int i=0;i<n;i++)
    {
        x=right[i]-left[i]-1;
        ans.push_back(x*arr[i]);
    }

    int mx=0;
    for(int x:ans)
        if(mx<x)mx=x;

        return mx;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,m;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        cin>>arr[i][j];

    vector<int>v;
    for(int i=0;i<m;i++)
        v.push_back(arr[0][i]);
    int mx=0;
    mx=MAH(v);

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==0)
                v[j]=0;
            else
                v[j]=v[j]+arr[i][j];
        }
        mx=max(MAH(v),mx);
    }
    cout<<mx<<"\n";

}
