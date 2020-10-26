
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
    int n,a,pos;
    cin>>n;
    oset<pair<int,int>>st;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        st.insert({i,a});
    }
    for(int i=0;i<n;i++)
    {
        cin>>pos;
        pos--;
        auto it=st.find_by_order(pos);
        cout<<it->second<<" ";
        st.erase(it);
    }
}
