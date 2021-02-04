#include<stdio.h>
#include<stdlib.h>
typedef long long ll;

int main() {
    ll i,n;
    scanf("%ld",&n);
    ll res[100] = {0},arr[n];
    for(i=0;i<n;i++) {
        scanf("%lld",&arr[i]);
    }
    for(i=0;i<n;i++) {
        res[arr[i]]++;
    }
    for(i=0;i<100;i++) {
        printf("%lld ",res[i]);
    }
    printf("\n");
    return 0;
}
