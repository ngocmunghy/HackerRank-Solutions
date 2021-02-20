#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void solve() {
    char str[100001];
    scanf("%s",str);
    long i,n = strlen(str), count[26];
    for(i = 0; i < 26; i++) {
        count[i] = 0;
    }
    if(n % 2 == 0) {
        for(i=0;i<n;i++) {
            count[str[i]-'a']++;
        }
        for(i=0;i<26;i++) {
            if(count[i]%2 == 1) {
                printf("NO\n");
                return;
            }
        }
        printf("YES\n");
    } else {
        for(i=0;i<n;i++) {
            count[str[i]-'a']++;
        }
        long flag = 0;
        for(i=0;i<26;i++) {
            if(count[i]%2 == 1) {
                flag++;
            }
        }
        if(flag == 1) {
            printf("YES\n");
            return;
        } else {
            printf("NO\n");
            return;
        }
    }
}

int main() {
    solve();
    return 0;
}
