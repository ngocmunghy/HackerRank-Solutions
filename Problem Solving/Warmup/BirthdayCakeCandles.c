#include<stdio.h>
int  main() {
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int count=0, max = -1;
    for(i=0;i<n;i++) {
        if (max < a[i]) {
            max = a[i];
            count = 1;
        }
        else if (max == a[i])
            count +=1;
    }
    printf("%d",count);
    return 0;
}

