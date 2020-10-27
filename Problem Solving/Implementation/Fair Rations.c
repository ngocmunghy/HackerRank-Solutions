#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    int i,j,n;
    scanf("%d",&n);
    int B[n];
    for(i=0;i<n;i++) {
        scanf("%d",&B[i]);
    }
    int sum=0,count=0;
    for(i=0;i<n;i++) {
        sum += B[i];
    }
    if(sum%2 != 0) {
        printf("NO\n");
    } else {
        for(i=0;i<n-1;i++) {
            if(B[i]%2 != 0) {
                B[i]++;
                B[i+1]++;
                count+=2;
            }
        }
        if(B[i-1] %2 == 0) {
            printf("%d\n",count);
        } else {
            printf("%d\n",count+1);
        }
    }
    return 0;
}
