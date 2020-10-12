#include<stdio.h>

int main() {
    long long int a[5];
    long long int i;
    for(i=0;i<5;i++) {
        scanf("%lld",&a[i]);
    }
    long long int s=0,sum[5];
    for (i=0;i<5;i++)
        s += a[i];
    for (i=0;i<5;i++) {
        sum[i] = s - a[i];
    }
    long long int max = sum[0], min = sum[0];
    for (i=1;i<5;i++) {
        if(max < sum[i]) max = sum[i];
        if(min > sum[i]) min = sum[i];
    }
    printf("%lld %lld",min, max);
    return 0;
}