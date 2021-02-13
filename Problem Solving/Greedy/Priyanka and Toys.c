#include<stdio.h>
#include<stdlib.h>

int cmpfunc(const void *a, const void *b) {
    return (*(long*)a)-(*(long*)b);
}

int main() {
    long n;
    scanf("%ld",&n);
    long arr[n];
    for(long i=0;i<n;i++) {
        scanf("%ld",&arr[i]);
    }
    qsort(arr, n, sizeof(long), cmpfunc);
    long count = 1, base = arr[0];
    for(long i=1;i<n;i++) {
        if(arr[i] > base+4) {
            count++;
            base = arr[i];
        }
    }
    printf("%ld\n",count);
    return 0;
}
