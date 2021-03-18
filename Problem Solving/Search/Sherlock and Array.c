#include<stdio.h>
#include<stdlib.h>

void solve() {
    long n, i, j, left=0, sum=0;
    scanf("%ld",&n);
    long arr[n];
    for(i=0;i<n;i++) {
        scanf("%ld",&arr[i]);
        sum += arr[i];
    }
    
    left = 0;
    for(i=0;i<n;i++) {
        if(left*2 == sum - arr[i]) {
            printf("YES\n");
            return;
        }
        left += arr[i];
    }
    printf("NO\n");
}

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
        solve();
    return 0;
}
