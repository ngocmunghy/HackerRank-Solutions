#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int tmp = arr[n-1];
    for(i=n-1;i>=1;i--) {
        if(arr[i-1] >= tmp) {
            arr[i] = arr[i-1];
        for(int j=0;j<n-1;j++) {
            printf("%d ",arr[j]);
        }
        printf("%d\n",arr[n-1]);
        } else {
            arr[i] = tmp;
            for(int j=0;j<n-1;j++) {
                printf("%d ",arr[j]);
            }
            printf("%d\n",arr[n-1]);
            break;
        }
    }
    if(i==0) {
        arr[i] = tmp;
        for(int j=0;j<n-1;j++) {
            printf("%d ",arr[j]);
        }
        printf("%d\n",arr[n-1]);
    }
    return 0;
}
