#include<stdio.h>

int main() {
    int n,d,i,j,tmp;
    scanf("%d %d",&n,&d);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(j=0;j<d;j++) {
            tmp = a[0];
            i=0;
            while (i< n-1){
                a[i] = a[i + 1];
                i++;
            } 
            a[i] = tmp;
    }
    for(i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
    return 0;
}
