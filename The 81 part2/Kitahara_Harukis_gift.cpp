#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,x,y,sum1=0,sum2=0,count=0,z,x1,y1,flag1=0,flag2=0,flag3=0;
    cin>>n;

    vector<int>v;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    z=*v.rbegin();

    if(n&1)
    {

        x1=0;y1=0;
        int i=0,j=n-1;
        while(i<j)
        {

            if(v[i]+v[j]>z)
            {
                j--;
            }
            else if(v[i]+v[j]<z)
            {
                i--;
            }
            else
            {
                x1=v[i];
                y1=v[j];
                v[i]=0;
                v[j]=0;

                break;
            }
        }

        sort(v.begin(),v.end());


       for(int i=0;i<n-2;i+=2)
        {


            if(count%2==0)
            {
                x=v[i];
                y=v[i+1];

            }
            else
            {
                x=v[i+1];
                y=v[i];

            }

            sum1+=x;
            sum2+=y;
            count++;
        }
        //cout<<sum1<<" "<<sum2<<endl;
        sum2+=z;
        sum1+=x1+y1;


    }
    else
    {
        for(int i=0;i<n-1;i+=2)
        {


            if(count%2==0)
            {
                x=v[i];
                y=v[i+1];
            }
            else
            {
                x=v[i+1];
                y=v[i];
            }
            count++;
            sum1+=x;
            sum2+=y;
        }
    }
    //cout<<sum1<<" "<<sum2<<endl;
    if(sum1==sum2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
