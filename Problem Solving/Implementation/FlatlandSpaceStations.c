#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

    int n,m,i,j;
    scanf("%d %d",&n,&m);
    int arr[m];
    for(i=0;i<m;i++) {
        scanf("%d",&arr[i]);
    }
    int max=0;
    for(i=0;i<n;i++) {
        int min=999999;
        for(j=0;j<m;j++) {
            if( abs(i-arr[j]) < min ) {
                min = abs( i-arr[j] );
            }
        }
        if( min > max ) {
            max = min;
        }
    }
    printf("%d",max);

    return 0;
}
