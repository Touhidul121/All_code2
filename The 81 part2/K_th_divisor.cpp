#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;
typedef long long ll;
typedef long double ld;



int main()
{

    ll n,k;
    cin>> n>>k;
    vector<ll> v;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {

                v.push_back(i);
    if(i*i !=n)
                v.push_back(n/i);

        }
    }
    if(v.size()<k)
        cout<< "-1" <<"\n";
    else{
    sort(v.begin(),v.end());
    cout<< v[k-1] <<"\n";
    }
}

