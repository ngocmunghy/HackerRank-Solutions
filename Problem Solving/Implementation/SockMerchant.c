#include<stdio.h>

void insertionSort (int a[], int n) {
    int i,j,tmp;
    for (i=1; i<=n-1; i++) {
        j=i;
        while(j>0 && a[j-1]> a[j]) {
            tmp = a[j-1];
            a[j-1] = a[j];
            a[j] = tmp;
            j--;
        }
    }
}

int main() {
    int i,n,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    insertionSort(a,n);
    for(i=0;i<=n-1;i++){
        if (a[i]==a[i+1]){
            count++;
            i++;
        }
    }
    printf("%d",count);
    return 0;
}