#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

    int n,i,k;
    scanf("%d",&n);
    char s[20] = "hackerrank";
    char str[100000];
    for(i=0;i<n;i++) {
        int j=0;
        scanf("%s",str);
        for(k=0;k<strlen(str);k++) {
            if(str[k] == s[j] && j < strlen(s)) {
                
                j++;
                
            }
        }
        if(j==strlen(s)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
