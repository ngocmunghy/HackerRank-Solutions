#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i, height[26];
    for(i=0;i<26;i++) { // input height of alphabet
        scanf("%d",&height[i]);
    }
    char s[10] ;
    scanf("%s",s); // input string
    int len = strlen(s);
    int str_height[len];
    for(i=0;i<len;i++) { 
        for(int j=0;i<26;j++) {
            if(s[i] == 'a'+j){
                str_height[i] = height[j];
                break;
            }
        }
    }
    int max = str_height[0];
    for(i=1;i<len;i++) {
        if(max < str_height[i])
            max = str_height[i];
    }
    printf("%d",max*len);
    return 0;
}
