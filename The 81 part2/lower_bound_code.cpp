#include<bits/stdc++.h>
using namespace std;
int a[10];
int bs_upper_bound(int a[], int n, int x) {
    int l = 0;
    int h = n; // Not n - 1
    while (l < h) {
        int mid =  l + (h - l) / 2;
        if (x >= a[mid]) {
            l = mid + 1;
        } else {
            h = mid;
        }
    }
    return l;
}

int bs_lower_bound(int a[], int n, int x) {
    int l = 0;
    int h = n; // Not n - 1
    while (l < h) {
        int mid =  l + (h - l) / 2;
        if (x <= a[mid]) {
            h = mid;
        } else {
            l = mid + 1;
        }
    }
    return l;
}




    int main(){
        int k;
    for(int i=0;i<10;i++)
        cin>>a[i];
    sort(a,a+10);
    cout<<"Enter value to be searched"<<'\n';
    cin>>k;
    cout<<bs_lower_bound(a,9,k);
}
