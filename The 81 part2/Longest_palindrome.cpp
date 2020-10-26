#include<bits/stdc++.h>
using namespace std;

int check(string a,string b)
{

    if(a==string(b.rbegin(),b.rend()))
        return 1;
    else
        return 0;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<string> v;
    stack<string> stk1,stk2;
    deque<string> dk;
    string s;
    for(int i=0;i<n;i++)
    {
     cin>>s;
     v.push_back(s);
    }

    for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++)
    {
      if(check(v[i],v[j])==1)
      {

          stk1.push(v[i]);
          stk2.push(v[j]);
      }
    }
    }

    bool self;
    for(int i=0;i<n;i++)
   {
       if(v[i]==string(v[i].rbegin(),v[i].rend()))
            {
            dk.push_back(v[i]);
            break;
        }
    }
    while(!stk1.empty())
    {
        dk.push_front(stk1.top());
        stk1.pop();
        dk.push_back(stk2.top());
        stk2.pop();
    }
    cout<<dk.size()*m<<endl;
    for(auto x:dk)
    {
        cout<<x;
    }
}
