#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swap(char *a, char *b) {
    char c = *a;
    *a = *b;
    *b = c;
} 

int main() {
    int t,i,j,k,n;
    scanf("%d",&t);
    for(int t_i=0; t_i<t; t_i++) {
        scanf("%d",&n);
        char strArr[n][n+1];
        for(i=0;i<n;i++) {
            scanf("%s",strArr[i]);
        }
        
        // sort each row
        for(i=0;i<n;i++) {
            for(j=0;j<n-1;j++) {
                for(k=j+1; k<n; k++) {
                    if(strArr[i][j] > strArr[i][k]) {
                        swap(&strArr[i][j], &strArr[i][k]);
                    }
                }
            } 
        }
        
        int flag = 0; // flag 0 -> YES, flag 1 -> NO
        for(i=0;i<n;i++) {
            for(j=0;j<n-1;j++) {
                if(strArr[j][i] > strArr[j+1][i]) {
                    flag = 1;
                    break;
                }
            }
            if (flag) {
                break;
            }
        }
        if(flag) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }
    
    return 0;
}
