#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int *arr1 = (int*)malloc(n*sizeof(int));
    int *arr2 = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++) {
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++) {
        scanf("%d",&arr2[i]);
    }
    int count = 0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(arr1[i] == arr2[j] && (arr1[i] != 0) && (arr2[j] != 0)) {
                arr1[i] = 0;
                arr2[j] = 0;
                count +=2;
                break;
            }
        }
    }
    if(count == 2*n) {
        printf("%d\n",count/2-1);
    } else {
        printf("%d\n",count/2+1);
    }
    return 0;
}
