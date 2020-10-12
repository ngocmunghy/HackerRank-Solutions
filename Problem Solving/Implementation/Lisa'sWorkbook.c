#include<stdio.h>
#include<stdlib.h>

int main() {
    int i,n,m,j,k;
    scanf("%d %d",&n,&k);
    int arr[n+1];
    for(i=1;i<n+1;i++) {
        scanf("%d",&arr[i]);
    }
    int div,mod,page=0,count=0;
    for(i=1;i<=n;i++) {
        div = arr[i] / k;
        mod = arr[i] % k;
        if(mod == 0) div--;
        for(j=0;j<=div;j++) {
            page++;
            for(m=j*k+1;m<=j*k+k;m++) {
                if(m == page)
                    count++;
                if(m == arr[i])
                    break;
            }
        }
    }
    printf("%d",count);
    return 0;
}
