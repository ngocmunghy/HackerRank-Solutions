#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void solve() {
    char s[100001];
    scanf("%s",s);
    long i,n = strlen(s),count=0;
    for(i=0;i<n-1;i++) {
        if(s[i] == s[i+1])
            count++;
    }
    printf("%ld\n",count);
}

int main() {
    long q;
    scanf("%ld",&q);
    while(q--) 
        solve(); 
    return 0;
}
