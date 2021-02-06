#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>

int cmpfunc(const void *a, const void *b) {
    return (*(long*)a) - (*(long*)b);
}

int main() {
    
    long i,j,n,min = LONG_MAX;
    scanf("%ld",&n);
    long arr[n],arr_res[n];
    for(i=0;i<n;i++) {
        scanf("%ld",&arr[i]);
    }
    
    qsort(arr, n, sizeof(long), cmpfunc);
    
    // find min diff
    for(i=0;i<n-1;i++) {
        if(min > (arr[i+1]-arr[i])) {
            min = (arr[i+1]-arr[i]);
        }
    }
    
    for(i=0;i<n-1;i++) {
        int diff = arr[i+1]-arr[i];
        if(diff == min) {
            printf("%ld %ld ",arr[i],arr[i+1]);
        }
    }
        
    return 0;
}
