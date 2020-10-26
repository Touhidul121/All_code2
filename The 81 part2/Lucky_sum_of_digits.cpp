#include<bits/stdc++.h>
using namespace std;

bool is_right(int n)
{
    bool f=true;
    while(n)
    {

        if((n%10)!=4 &&(n%10)!=7)
        {

            f=false;
            break;
        }
        n=n/10;
    }
    return f;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    cout<<is_right(n)<<"\n";
    is_right(n)?cout<<"YES":cout<<"NO";
}
