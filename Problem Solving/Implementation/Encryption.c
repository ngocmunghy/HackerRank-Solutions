#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main() {

    char str[100];
    gets(str);
    int n=strlen(str);
    int low = (int)(sqrt((double)n));
    int high;
    if(low*low == n) {
        high = low;
    } else {
        high = low+1;
    }
    int div = n/high;
    int mod = n%high;
    int i,j;
    if(mod == 0) {
        for(i=0;i<high;i++) {
            for(j=0;j<div;j++) {
                printf("%c",str[j*high+i]);
            }
            printf(" ");
        }
    } else {
        for(i=0;i<mod;i++) {
            for(j=0;j<div+1;j++) {
                printf("%c",str[j*high+i]);
            }
            printf(" ");
        }
        for(i=0;i<high-mod;i++) {
            for(j=0;j<div;j++) {
                printf("%c",str[j*high+mod+i]);
            }
            printf(" ");
        }
    }

    return 0;
}
