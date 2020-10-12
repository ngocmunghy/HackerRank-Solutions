#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main() {
    char str[100];
    scanf("%s",str);
    int len = strlen(str);
    int i,j,flag;
    do{
        flag = 0;
        for(i=0;i<len-1;) {
            if(str[i] == str[i+1]) {
                flag = 1;
                for(j=i;j<len-2;j++) {
                    str[j] = str[j+2];
                }
                len -= 2;
            } else {
                i++;
            }
        }
        str[len] = '\0';
    } while((flag == 1) && (len > 0) );

    if(len != 0) {
        printf("%s",str);
    } else {
        printf("Empty String");
    }

    return 0;
}
