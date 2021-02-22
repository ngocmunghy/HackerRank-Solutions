#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void solve() {
    char str1[100001],str2[100001];
    scanf("%s %s",str1,str2);
    int count[26];
    for(int i=0;i<26;i++) {
        count[i] = 0;
    }
    for(long i=0;i<strlen(str1);i++) {
        if(!count[str1[i]-'a']) 
            count[str1[i]-'a']++;
    }
    for(long i=0;i<strlen(str2);i++) {
        if(count[str2[i]-'a']) {
            printf("YES\n");
            return;
        }
    }
    printf("NO\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        solve();
    }
    return 0;
}
