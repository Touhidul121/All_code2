#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int n=a.size(),k=0;
    vector<int>v(33);
    for(int i=0;i<a.size();i++)
    {
        v[a[i]-'a']++;
    }

    for(int i=0;i<=26;i++)
    {
        if(v[i]%2!=0)
            k++;
    }
    if(k==0)
        cout<<"First"<<endl;
    else if(!(k&1))
        cout<<"Second"<<endl;
    else
        cout<<"First"<<endl;
}
