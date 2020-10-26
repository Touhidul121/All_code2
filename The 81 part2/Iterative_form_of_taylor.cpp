#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x,n;
    double s=1;
   cout<<"Enter power of e & max power upto which you want to go"<<endl;
   cin>>x>>n;

   for(;n>0;n--)
   {
     s=1+(x/n)*s;
   }
   cout<<"The value of e to the power"<<x<<" is = "<<fixed<<setprecision(12)<<s<<endl;
}
