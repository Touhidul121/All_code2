#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int h1,h2,m1,m2,sum1=0,sum=0;

    h1=(s1[0]-'0')*10+(s1[1]-'0')*1;
    h2=(s2[0]-'0')*10+(s2[1]-'0')*1;

    m1=(s1[3]-'0')*10+(s1[4]-'0')*1;
    m2=(s2[3]-'0')*10+(s2[4]-'0')*1;

//cout<<h1<<" "<<m1<<endl;
//cout<<h2<<" "<<m2<<endl;
    int min_diff=(h2*60)-(h1*60)+m2-m1;
    cout<<min_diff<<endl;
    min_diff=min_diff/2;

    int h=h1+(min_diff/60);
    int rest=m1+min_diff%60;

//cout<<h<<" "<<rest<<endl;
   if(h>=10&&rest>=10)
   {
       cout<<h<<":"<<rest<<endl;

   }


   else if(h<10&&rest>=10)
    cout<<0<<h<<":"<<rest<<endl;
    else if(h>=10&&rest<10)
        cout<<h<<":"<<0<<rest<<endl;
        else if(h<10&&rest<10)
            cout<<0<<h<<":"<<0<<rest<<endl;



}
