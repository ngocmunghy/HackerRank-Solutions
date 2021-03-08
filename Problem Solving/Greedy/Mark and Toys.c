#include<stdio.h>
#include<stdlib.h>

int cmpfunc(const void *a, const void *b) {
    return (*(long*)a) - (*(long*)b);
}

int main() {
    
    long n,k,sum=0;
    scanf("%ld %ld",&n,&k);
    long arr[n];
    
    for(long i=0;i<n;i++) scanf("%ld",&arr[i]);
    
    qsort(arr, n, sizeof(long), cmpfunc);
    
    for(long i=0;i<n;i++) {
        sum += arr[i];
        if(sum > k) {
            printf("%ld\n",i);
            break;
        }
    }
    
    return 0;
}
