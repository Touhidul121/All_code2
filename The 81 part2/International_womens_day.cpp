#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,j,a;
    cin>>n>>k;

    vector<int> c_pair(n);

    for(int i=0;i<n;i++)
    {
        cin>>a;
        c_pair[a%k]++;
    }
    int no_pair;
    no_pair=c_pair[0]/2;
    if(k%2==0)
        no_pair+=c_pair[k/2]/2;

    for(int i=1;i<(k+1)/2;i++)
    {
        j=k-i;
        no_pair+=min(c_pair[i],c_pair[j]);
    }
    cout<<no_pair*2<<endl;
}
