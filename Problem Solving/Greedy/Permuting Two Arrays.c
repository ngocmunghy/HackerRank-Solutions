#include<stdio.h>
#include<stdlib.h>

int ascfunc(const void *a, const void *b) {
    return (*(long*)a) - (*(long*)b);
}

int descfunc(const void *a, const void *b) {
    return (*(long*)b) - (*(long*)a);
}

void solve() {
    long n,k;
    scanf("%ld %ld",&n,&k);
    long arr1[n],arr2[n];
      
    for(long i=0;i<n;i++) scanf("%ld",&arr1[i]);
    for(long i=0;i<n;i++) scanf("%ld",&arr2[i]);
    
    qsort(arr1, n, sizeof(long), ascfunc);
    qsort(arr2, n, sizeof(long), descfunc);

    for(long i=0;i<n;i++){
        if(arr1[i]+arr2[i] < k) {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}

int main(){
    int q;
    scanf("%d",&q);
    while(q--)
        solve();
    return 0;
}
