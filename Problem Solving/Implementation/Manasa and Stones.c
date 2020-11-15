#include<stdio.h>
#include<stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    for(int t_i=0;t_i<t;t_i++) {
        int n,a,b;
        scanf("%d %d %d",&n,&a,&b);
        
        if(a<b) {
            for(int i=0;i<n;i++) {
                printf("%d ",a*(n-1-i)+b*i);
            }
        } else if(a>b) {
            for(int i=0;i<n;i++) {
                printf("%d ",b*(n-1-i)+a*i);
            }            
        } else {
            printf("%d ",a*(n-1));
        }
        
        printf("\n");
    }
    return 0;
}
