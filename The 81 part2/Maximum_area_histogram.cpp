#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n;
    cin>>n;
    int arr[n+1];

    for(int i=0;i<n;i++)cin>>arr[i];

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

    for(int x:ans)
        cout<<x<<" ";
    cout<<"\n";

}
