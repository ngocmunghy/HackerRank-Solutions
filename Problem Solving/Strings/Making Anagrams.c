#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    char str1[10001],str2[10001];
    int i,count[26],total=0;
    for(i=0;i<26;i++) {
        count[i] = 0;
    }
    scanf("%s %s",str1,str2);
    for(i=0;i<strlen(str1);i++) {
        count[str1[i]-'a']++;
    }
    for(i=0;i<strlen(str2);i++) {
        count[str2[i]-'a']--;
    }
    for(i=0;i<26;i++) {
        total += abs(count[i]);
    }
    printf("%d\n",total);
    return 0;
}
