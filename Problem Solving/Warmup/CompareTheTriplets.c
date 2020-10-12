#include<stdio.h>

int main(){
    int a[101], b[101];
    int i,count1=0,count2=0;
    for(i=0;i<3;i++) {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < 3; i++) {
      scanf("%d", &b[i]);
    }
    for(i=0;i<3;i++) {
        if(a[i]>b[i])
            count1 = count1 + 1;
        else if (a[i]<b[i])
            count2 = count2 + 1;
        else {
            count1 = count1 + 0;
            count2 = count2 + 0;
        }
    }
    printf("%d %d",count1,count2);
    return 0;
}

