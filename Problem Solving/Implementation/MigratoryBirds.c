#include<stdio.h>

int main() {
    int i,n,k;
    scanf("%d",&n);
    int a[n],count[5]={0};
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        count[a[i]-1]++;
    }
    int max=count[0];
    k=1;
    for(i=1;i<=4;i++) {
        if ( max < count[i] ) {
            max = count[i];
            k = i+1;
        }
    }
    printf("%d",k);
    return 0;
}

