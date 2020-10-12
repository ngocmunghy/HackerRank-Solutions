#include<stdio.h>
#include<stdlib.h>

int main() {
    long i,n,k,q;
    scanf("%ld %ld %ld",&n,&k,&q);
    long a[n],b[q];
    for(i=0;i<n;i++) {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<q;i++) {
        scanf("%ld",&b[i]);
    }
    long mod = k % n;
    long res[n];   // return array after rotate
    for(i=0;i<n;i++) {
        res[mod++] = a[i];
        if(mod == n) {
            mod = 0;
        }
    }
    for(i=0;i<q;i++) {
        printf("%ld\n",res[b[i]]);
    }
    // for(i=0;i<n;i++) {
    //     printf("%d\n",res[i]);
    // }

    return 0;
}
