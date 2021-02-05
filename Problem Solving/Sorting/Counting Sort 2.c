#include<stdio.h>
#include<stdlib.h>
typedef long long ll;

int main() {
    ll i,j,n;
    scanf("%ld",&n);
    ll res[100] = {0},arr[n];
    for(i=0;i<n;i++) {
        scanf("%lld",&arr[i]);
    }
    for(i=0;i<n;i++) {
        res[arr[i]]++;
    }
    for(i=0;i<100;i++) {
        if(res[i]) {
            for(j=0;j<res[i];j++) {
                printf("%d ",i);
            }
        }
    }
    printf("\n");
    return 0;
}
