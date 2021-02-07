#include<stdio.h>
#include<stdlib.h>

int main() {
    
    long t,ti,i,j,key,n,count;
    scanf("%ld",&t);
    for(ti=0; ti<t; ti++) {
        count=0;
        scanf("%ld",&n);
        long arr[n];
        for(i=0;i<n;i++) {
            scanf("%ld",&arr[i]);
        }
        for(i=1;i<n;i++) { 
            key = arr[i]; 
            j = i-1; 
            while (j >= 0 && arr[j] > key) { 
                arr[j+1] = arr[j]; 
                j--;
                count++;
            } 
            arr[j+1] = key; 
        } 
        printf("%ld\n",count);
    }
    
    return 0;
}
