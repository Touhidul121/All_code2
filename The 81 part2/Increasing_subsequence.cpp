#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m=0,r,flag1=0,flag2=0,x=0,y=0;
    cin>>n;
    vector<int> v(n),v1;
    deque<int> dk;
    v1.push_back(0);
    char s[200000];

    for(int i=0;i<n;i++){
        cin>>v[i];
        dk.push_back(v[i]);
    }
   int j=0;
    while(!dk.empty()&&j<n)
    {
        flag1=0;
        flag2=0;
        x=dk.front();
        y=dk.back();


        r=v1[v1.size()-1];

        if(x==y&&x>r)
        {

            v1.push_back(x);
            s[m++]='L';
           break;
       }
if(x<r&&y<r)
    break;
        if(x>r&&y>r)
        {
        if(x<y){

            v1.push_back(x);
            dk.pop_front();
            s[m++]='L';
           flag1++;
        }
        else if(y<x)
            {
            v1.push_back(y);
            dk.pop_back();
            s[m++]='R';
            flag2++;
            }
        }
        else
        {
            if(dk.size()>1){
            flag1++;
            v1.push_back(max(x,y));
            dk.pop_back();

            if(x>y)
                s[m++]='L';
            else
                s[m++]='R';
            }
        }
            if(flag1==0&&flag2==0)
                break;
          j++;

    }

    cout<<v1.size()-1<<endl;
    for(int i=0;i<m;i++)
        cout<<s[i];
    cout<<endl;


}
