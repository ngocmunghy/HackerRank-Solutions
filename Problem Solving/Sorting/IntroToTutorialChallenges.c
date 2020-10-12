#include<stdio.h>

int main() {
    int i,n,key;
    scanf("%d",&key);
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++) {
        if(a[i]==key)
            printf("%d", i);
    }
    return 0;
}