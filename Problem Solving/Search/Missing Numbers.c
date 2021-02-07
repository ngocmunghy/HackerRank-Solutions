#include<stdio.h>
#include<stdlib.h>

int cmpfunc(const void *a, const void *b) {
    return (*(long*)a) - (*(long*)b);
}

int main() {
    long i,j,n,m,k=0;
    scanf("%ld",&n);
    long arr[n];
    for(i=0;i<n;i++) {
        scanf("%ld",&arr[i]);
    }
    qsort(arr, n, sizeof(long), cmpfunc);
    scanf("%ld",&m);
    long brr[m],crr[100];
    for(i=0;i<m;i++) {
        scanf("%ld",&brr[i]);
        // if(brr[i] != arr[i]) {
        //     crr[k++] = brr[i];
        //     i--;
        //     m--;
        // }
    }
    qsort(brr, m, sizeof(long), cmpfunc);
    for(i=0;i<m;i++) {
        if(arr[i] != brr[i]) {
            crr[k++] = brr[i];
            for(j=i;j<m-1;j++) {
                brr[j] = brr[j+1];
            }
            i--;
            m--;
        }
    }
    //qsort(crr,k,sizeof(long),cmpfunc);
    for(i=0;i<k-1;i++) {
        if(crr[i] == crr[i+1]) {
            for(j=i;j<k-1;j++) {
                crr[j] = crr[j+1];
            }
            k--;
            i--;
        }
    }
    for(i=0;i<k;i++) {
        printf("%ld ",crr[i]);
    }
    printf("\n");
    return 0;
}
