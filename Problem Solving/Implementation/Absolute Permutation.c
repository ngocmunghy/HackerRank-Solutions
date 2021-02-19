#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void solve() {
    long n,k;
    scanf("%ld %ld",&n,&k);
    if(k==0) {
        for(long i=1;i<=n;i++) {
            printf("%ld ",i);
        }
        printf("\n");
        return;
    }
    long pattern = n/k;
    if(pattern % 2 == 0 && n%k == 0) {
        long flag = 1;
        for(long i=1;i<=n;i += k) {
            if(flag) {
                for(long j=i;j<i+k;j++) {
                    printf("%ld ",j+k);
                }
                flag = 0;
            } else {
                for(long j=i;j<i+k;j++) {
                    printf("%ld ",j-k);
                }
                flag = 1;
            }
        }
        printf("\n");
        return;
    } else {
        printf("-1\n");
        return;
    }
}

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
        solve();
    return 0;
}
