#include<stdio.h>

int main() {
    int s,t,a,b,m,n;
    scanf("%d %d",&s,&t);
    scanf("%d %d",&a,&b);
    scanf("%d %d",&m,&n);
    int i,j,x[m],y[n],count1=0, count2=0;
    int tmp;
    for(i=0;i<m;i++) {
        scanf("%d",&x[i]);
        tmp = x[i]+a;
        if(tmp>=s && tmp<=t) 
            count1++;
    }
    for(j=0;j<n;j++) {
        scanf("%d",&y[j]);
        tmp = y[j]+b;
        if(tmp>=s && tmp<=t) 
            count2++;
    }
    printf("%d\n%d",count1,count2);
    return 0;
}