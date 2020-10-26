#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,x=0;
    cin>>n>>s;

    vector<int> v1(n),v2(n);
    for(int i=0;i<n;i++)
    cin>>v1[i];

    for(int i=0;i<n;i++)
        cin>>v2[i];

        if(v1[0]==0){
            cout<<"NO"<<endl;
            return 0;
        }
        else{


    if(v1[0]==1&&v1[s-1]==1)
       cout<<"YES"<<endl;

else
{
    for(int i=s;i<n;i++)
    {
        if(v1[i]==1&&v2[i]==1)
        {
            x++;
            break;
        }
    }

if(x>0&&v2[s-1])
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
}
        }
}

