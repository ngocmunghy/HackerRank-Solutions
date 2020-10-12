#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,t,k,i,j,min,m;
    scanf("%d %d",&n,&t);
    int width[n];
    for(k=0;k<n;k++) {
        scanf("%d",&width[k]);
    }
    for(k=0;k<t;k++) {
        scanf("%d %d", &i,&j);
        min = 9999;
        for(m=i;m<=j;m++) {
            if(min > width[m])
                min = width[m];
        }
        printf("%d\n",min);
    }
    return 0;
}
