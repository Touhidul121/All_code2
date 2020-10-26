/*Three Cases -

Case 1 : N is odd.
Then the greatest LCM is n(n-1)(n-2).
n and n-1 are coprime as are (n-1) and n-2 because they are consecutive numbers.
n and n-2 are coprime because they are consecutive odd numbers. gcd(n, n-2) = gcd(n,2) = 1
So, the three greatest coprime numbers are guaranteed to have the greatest LCM. We are done.

Case 2 : N is even but not a multiple of 3.
Then, in that case, the greatest LCM is n(n-1)(n-3).
n and n-1 are coprime because of being consecutive numbers and n-1 and n-3 are coprime because they are consecutive odd numbers.
gcd(n, n-3) = gcd(n,3) = 1 [Since, n is not a multiple of 3]

Note that n and n-2 are both even so not coprime.

Among the two candidate choices here - n(n-1)(n-3) and (n-1)(n-2)(n-3), the former product is greater, because n > n-2

Case 3 : N is even and a multiple of 3
Then, the greatest LCM is (n-1)(n-2)(n-3). If n is even, then n-1 is odd, and the three numbers are all coprime by virtue of being reduced to the first case.
If we wish to keep n(n-1) and search for the largest number coprime to both of them, then we cannot get a number greater than n-5.

Among (n-1)(n-2)(n-3) and n(n-1)(n-5), the former is always greater. So, we have an answer straight away. */

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll n;
    cin>>n;
    if(n<=2)
        cout<<n<<"\n";
    else if(n&1)
    {
        cout<<n*(n-1)*(n-2)<<"\n";
    }
    else
    {
        if(n%3!=0)
        {
            cout<<n*(n-1)*(n-3)<<"\n";
        }
        else
        {
            cout<<(n-1)*(n-2)*(n-3)<<"\n";
        }
    }
}
