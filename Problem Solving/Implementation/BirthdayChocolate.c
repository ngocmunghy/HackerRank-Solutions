#include<stdio.h>

int main() {
    int i,j,n,d,m,sum,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    scanf("%d %d",&d,&m);
    for(i=0;i<=n-m+1;i++) {
        sum = 0;
        for(j=i;j<i+m;j++) {
            sum = sum + a[j];
        }
        if (sum == d) count++;
    }
    printf("%d",count);
    return 0;
}