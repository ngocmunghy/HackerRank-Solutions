#include<stdio.h>

int main() {
    
    int i,n,k,charge;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    scanf("%d",&charge);
    int bill=0;
    for (i=0;i<n;i++) {
        if (i==k)    continue;
        bill = bill + a[i];
    }
    if (bill/2 == charge)
        printf("Bon Appetit");
    else printf("%d",charge - bill/2);

    return 0;
}