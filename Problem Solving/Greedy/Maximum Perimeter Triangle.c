#include<stdio.h>
#include<stdlib.h>

int cmpfunc(const void *a, const void *b) {
    return (*(long*)b)-(*(long*)a);
}


int main() {
    int t;
    scanf("%d",&t);
    long *arr = (long*)malloc(t*sizeof(long));
    for(int i=0;i<t;i++) {
        scanf("%ld",&arr[i]);
    }
    qsort(arr, t, sizeof(long), cmpfunc);
    long res[3] = {0,0,0}, flag = 0;
    for(int i=0;i<t-2;i++) {
        long a = arr[i], b=arr[i+1], c=arr[i+2];
        if(a+b>c && b+c>a && c+a>b) {
            printf("%d %d %d\n",c,b,a);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
