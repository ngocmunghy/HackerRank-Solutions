#include<stdio.h>

int main() {
    int i,n;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    int max, min, count_max, count_min;
    max = a[0], min = a[0];
    count_max = 0, count_min = 0;
    for(i=1;i<n;i++) {
        if(max < a[i]) {
            max = a[i];
            count_max++;
        }
        if (min > a[i]) {
            min = a[i];
            count_min++;
        }
    }
    printf("%d %d",count_max,count_min);
    return 0;
}