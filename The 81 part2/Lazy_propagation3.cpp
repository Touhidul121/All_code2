#include <bits/stdc++.h>
using namespace std;
#define MAX 100001


long long tree[4*MAX] = { 0 };

long long lazy[4*MAX] = { 0 };

void updateRangeUtil(int si, int ss, int se, int us,
                     int ue, int diff){

    if (lazy[si] != 0) {

        tree[si] += lazy[si];

        if (ss != se) {

            lazy[si * 2 + 1] += lazy[si];
            lazy[si * 2 + 2] += lazy[si];
        }

        lazy[si] = 0;
    }

    if (ss > se || ss > ue || se < us)
        return;
    if (ss >= us && se <= ue) {

        tree[si] +=diff;
        if (ss != se) {

            lazy[si * 2 + 1] += diff;
            lazy[si * 2 + 2] += diff;
        }
        return;
    }
    int mid = (ss + se) / 2;
    updateRangeUtil(si * 2 + 1, ss, mid, us, ue, diff);
    updateRangeUtil(si * 2 + 2, mid + 1, se, us, ue, diff);


    tree[si] = min(tree[si * 2 + 1], tree[si * 2 + 2]);
}


long long getSumUtil(int ss, int se, int qs, int qe, int si)
{

    if (lazy[si] != 0) {
        tree[si] += lazy[si];

        if (ss != se) {

            lazy[si * 2 + 1] += lazy[si];
            lazy[si * 2 + 2] += lazy[si];
        }


        lazy[si] = 0;
    }

    if (ss > se || ss > qe || se < qs)
        return LLONG_MAX;


    if (ss >= qs && se <= qe)
        return tree[si];

    int mid = (ss + se) / 2;
    return min(getSumUtil(ss, mid, qs, qe, 2 * si + 1),
               getSumUtil(mid + 1, se, qs, qe, 2 * si + 2));
}





int main()
{

    int n,q,type,l,r,val;
    cin>>n>>q;


    while(q--){
            cin>>type;
    if(type==1){
            cin>>l>>r>>val;
    updateRangeUtil(0, 0, n - 1, l, r-1, val);
    }

    else{
            cin>>l>>r;
    cout << getSumUtil(0, n - 1, l, r-1, 0)<<"\n";
    }
    }
    return 0;
}
