#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define ll long long

int cmpfunc(const void *a, const void *b) {
    long va,vb;
    va = *(long*)a;
    vb = *(long*)b;
    if(va > vb) {
        return 1;
    } else if (va == vb) {
        return 0;
    } else {
        return -1;
    }
}

void solve() {
    ll n;
    scanf("%lld",&n);
    ll i,j,k,row_count_arr[n+1], col_count_arr[n+1];
    memset(row_count_arr, 0, n * sizeof(ll));
    memset(col_count_arr, 0, n * sizeof(ll));
    for(ll i=0;i<n;i++) {
        for(ll j=0;j<n;j++) {
            scanf("%lld",&k);
            row_count_arr[i] += k;
            col_count_arr[j] += k;
        }
    }

    qsort(row_count_arr, n, sizeof(ll), cmpfunc);
    qsort(col_count_arr, n, sizeof(ll), cmpfunc);
    int flag = 0;
    for(ll i=0;i<n;i++) {
        if(row_count_arr[i] != col_count_arr[i]) {
            flag++;
            break;
        } 
    }
    if(flag) {
        printf("Impossible\n");
        return;
    } 
    printf("Possible\n");
}

int main() {
    ll t,ti;
    scanf("%lld",&t);
    while(t--)
        solve();
    return 0;
}
