#include<stdio.h>
#include<stdlib.h>

int main() {
    int i,j,n,k,total=100;
    scanf("%d %d",&n,&k);
    int c[n];
    for(i=0;i<n;i++) {
        scanf("%d",&c[i]);
    }
    i=0;
    while(k+i < n) {
        i += k;
        if(c[i] == 0) {
            total -= 1;
        } else {
            total -= 3;
        }
    }
    if(c[0] == 0) {
        total -= 1;
    } else {
        total -= 3;
    }
    printf("%d",total);
    return 0;
}