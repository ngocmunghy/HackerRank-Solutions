#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int n,i,j,k=0,l,max=0;
    scanf("%d",&n);
    char s[n], b[n];
    scanf("%s",s);
    for(i=97;i<122;i++) {
        for(j=0;j<n;j++) {
            if(s[j] == i) {
                b[k++] = s[j];
                break;
            }
        }
    }
    b[k] = '\0';
    
    for(i=0;i<strlen(b)-1;i++) {
        for(j=i+1;j<strlen(b);j++) {
            char store[n];
            int count=1, flag=0, a=0, t=0;
            for(k=0;k<strlen(s);k++) {
                if(s[k] == b[i]) {
                    store[a++] = b[i];
                } else if(s[k] == b[j]) {
                    store[a++] = b[j];
                }
            }
            store[a] = '\0';
            for(l=1;l<strlen(store);l++) {
                if(store[l] == store[l-1]) {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) {
                t = strlen(store);
            }
            if(t>max) {
                max = t;
            }
        }
    }
    printf("%d",max);
    return 0;
}
