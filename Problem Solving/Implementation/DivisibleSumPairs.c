#include<stdio.h>

int main() {
    int i,n,m,j,s,count=0;
    scanf("%d %d",&n,&m);
    int a[n];
    for (i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for (j=n-1;j>=0;j--) {
        for(i=0;i<j;i++) {
            s = a[i] + a[j];
            if (s % m == 0) 
                count++;
        }
    }
    printf("%d",count);
    return 0;
}