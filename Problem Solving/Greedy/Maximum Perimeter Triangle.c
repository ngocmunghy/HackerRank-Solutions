#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cmpfunc(const void *a, const void *b) {
    return (*(long*)a) - (*(long*)b);
}

void solve() {
    int n;
    scanf("%d",&n);
    long *arr = (long*)malloc(n*sizeof(long));
    for(int i=0;i<n;i++) {
        scanf("%ld",&arr[i]);
    }
    long max = 0, arr_max[3] = {0,0,0};
    for(int i=0;i<n-2;i++) {
        for(int j=i+1;j<n-1;j++) {
            for(int k=j+1;k<n;k++) {
                long a = arr[i]; 
                long b = arr[j]; 
                long c = arr[k];
                if(a+b>c && b+c>a && c+a>b) {
                    long sum = a+b+c;
                    if(max < sum) {
                        max = sum;
                        arr_max[0] = a;
                        arr_max[1] = b;
                        arr_max[2] = c;
                    }
                }
            }
        }
    }
    if(max) {
        qsort(arr_max, 3, sizeof(long), cmpfunc);
        for(int i=0;i<3;i++) {
            printf("%d ",arr_max[i]);
        }
    } else {
        printf("-1\n");
    }
}

int main() {
    solve();
    return 0;
}
