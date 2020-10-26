
#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;
#define ar array

int main()
{
    int t;
    cin>>t;
    while(t--){
      int A[1000];

  int n;
  cin>>n;

  for(int i=0;i<n;i++)
        cin>>A[i];
        oset<ar<int,2>>s;
        int ans=0;
        int cnt=0;
        for(int i=n-1;i>=0;i--)
        {

            ans=s.order_of_key({A[i],0});

            cnt+=ans;

            s.insert({A[i],i});
        }

        cout<<cnt<<"\n";
    }
}
