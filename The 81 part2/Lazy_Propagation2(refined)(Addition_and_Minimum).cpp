#include <bits/stdc++.h>
using namespace std;
#define MAX 100001


long long st[4*MAX] = { 0 };

long long lazy[4*MAX] = { 0 };

void update(int si, int ss, int se, int qs,
                     int qe, int val){

    if (lazy[si] != 0) {

        st[si] += lazy[si];

        if (ss != se) {

            lazy[si * 2 + 1] += lazy[si];
            lazy[si * 2 + 2] += lazy[si];
        }

        lazy[si] = 0;
    }

    if (ss > se || ss > qe || se < qs)
        return;
    if (ss >= qs && se <= qe) {

        st[si] +=val;
        if (ss != se) {

            lazy[si * 2 + 1] += val;
            lazy[si * 2 + 2] += val;
        }
        return;
    }
    int mid = (ss + se) / 2;
    update(si * 2 + 1, ss, mid, qs, qe, val);
    update(si * 2 + 2, mid + 1, se, qs, qe, val);


    st[si] = min(st[si * 2 + 1], st[si * 2 + 2]);
}


long long getMin(int si, int ss,int se, int qs, int qe)
{

    if (lazy[si] != 0) {
        st[si] += lazy[si];

        if (ss != se) {

            lazy[si * 2 + 1] += lazy[si];
            lazy[si * 2 + 2] += lazy[si];
        }


        lazy[si] = 0;
    }

    if (ss > se || ss > qe || se < qs)
        return LLONG_MAX;


    if (ss >= qs && se <= qe)
        return st[si];

    int mid = (ss + se) / 2;
    return min(getMin(2*si+1,ss, mid, qs, qe),
               getMin(2*si+2,mid + 1, se, qs, qe));
}





int main()
{

    int n,q,type,l,r,val;
    cin>>n>>q;


    while(q--){
            cin>>type;
    if(type==1){
            cin>>l>>r>>val;
    update(0, 0, n - 1, l, r-1, val);
    }

    else{
            cin>>l>>r;
    cout << getMin(0, 0,n - 1, l, r-1)<<"\n";
    }
    }
    return 0;
}

