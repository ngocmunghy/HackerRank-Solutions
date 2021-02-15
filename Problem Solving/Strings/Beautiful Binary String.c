#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    int i,n,count=0;
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",str);
    for(i=0;i<n-2;) {
        if(str[i] == '0' && str[i+1] == '1' && str[i+2] == '0') {
            count++;
            i += 3;
        } else {
            i++;
        }
    }
    printf("%d\n",count);
    return 0;
}
