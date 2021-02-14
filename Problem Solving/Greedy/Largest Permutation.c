#include<stdio.h>
#include<stdlib.h>

void swap(long *a, long *b) {
    long c = *a;
    *a = *b;
    *b = c;
}

int cmpfunc(const void *a, const void *b) {
    return (*(long*)b) - (*(long*)a);
}

int main() {
    long n,k,i,j,maxIndex;
    scanf("%ld %ld",&n,&k);
    long arr[n],tmp[n];
    for(i=0;i<n;i++) {
        scanf("%ld",&arr[i]);
        tmp[i] = arr[i];
    }
    qsort(tmp, n, sizeof(long), cmpfunc);
    for(i=0;i<n-1;i++) {
        if(arr[i] == tmp[i]) 
            continue;
        for(j=i+1;j<n;j++) {
            if(arr[j] == tmp[i]) break;
        }
        swap(&arr[i], &arr[j]);
        k--;
        if(!k) break;
    }
    for(i=0;i<n;i++) {
        printf("%ld ",arr[i]);
    }
    return 0;
}
