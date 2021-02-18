#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void solve() {
    char str[10001];
    scanf("%s",str);
    int n = strlen(str);
    if(n % 2 == 1) {
        printf("-1\n");
        return;
    } else {
        int count[26], cnt=0;
        for(int i=0;i<26;i++) {
            count[i] = 0;
        }
        for(int i=0;i<n/2;i++) {
            count[str[i]-'a']++;
        }
        for(int i=n/2;i<n;i++) {
            count[str[i]-'a']--;
        }
        for(int i=0;i<26;i++) {
            cnt += abs(count[i]);
        }
        printf("%d\n",cnt/2);
        return;
    }
}

int main() {
    int q;
    scanf("%d",&q);
    while(q--) {
        solve();
    }
    return 0;
}
