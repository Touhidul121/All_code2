#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count1=0,count2=1,count3=0,j,x=0,m=0;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)
            x++;
//        if((i==0||i==n-1)&&a[i]==1)
//        count1++;

    }
    //---count of consecutive from starting----

        j=0;
        while(a[j])
        {
            count1++;
            j++;
        }

    //-----count of last consecutive from last

        j=n-1;
        while(a[j])
        {
            count3++;
            j--;
        }

    for(int i=0;i<n-1;i++)
    {
        if(a[i]==1&&(a[i]==a[i+1]))
            count2++;
            if(count2>m)
            {
                m=count2;
            }
            if(a[i]==0)
                count2=1;
    }
    //cout<<m<<endl;
    if(x>0){

    cout<<max(count1+count3,m)<<endl;
    }
    else
        cout<<0<<endl;

}
