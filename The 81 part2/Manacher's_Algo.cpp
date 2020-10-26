#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,T;
    cin>>s;
    T+='$';
    for(int i=0;i<s.size();i++)
    {
        T+='#';
        T+=s[i];
    }
    T+='#';
    T+='@';
    cout<<T<<"\n";
    int n=T.size();
    vector<int>P(n,0);
    int C=0,R=0;

    for(int i=1;i<T.size()-1;i++)
    {
        int mirr=2*C-1;

        if(i<R)
            P[i]=min(R-i,P[mirr]);

        while(T[i+P[i]+1]==T[i-(P[i]+1)])
            P[i]++;

        if(i+P[i]>R)
        {
            C=i;
            R=i+P[i];
        }
    }
    cout<<*Bmax_element(P.begin(),P.end())<<"\n";
}
