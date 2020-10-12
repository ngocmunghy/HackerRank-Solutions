#include<stdio.h>

int main() {
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    int countP=0,countN=0,count0=0;
    for(i=0;i<n;i++) {
        if (a[i]>0) countP += 1;
        else if (a[i]<0) countN += 1;
        else count0 +=1;
    }
    float m =(float)countP/n, b =(float)countN/n, c =(float)count0/n;
    printf("%f\n%f\n%f",m,b,c);
    return 0;
}