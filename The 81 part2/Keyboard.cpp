#include<bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    cin>>x;

    vector<char>left(100),right(100);
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    string p;
    cin>>p;
    string res;
    for(int i=0;i<s.size()-1;i++)
    {
        left[s[i]-'a']=s[i+1];
    }
//    for(int i=0;i<left.size();i++)
//    {
//        cout<<left[i]<<" ";
//    }
    for(int i=1;i<s.size();i++)
    {
        right[s[i]-'a']=s[i-1];
    }
    if(x=='R'){
    for(int i=0;i<p.size();i++)
    {
      res+=right[p[i]-'a'];
    }
    }
    else
    {
      for(int i=0;i<p.size();i++)
    {
      res+=left[p[i]-'a'];
    }
    }
    cout<<res<<endl;
}
