#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

void solve() {
    char s[100000];
    scanf("%s",s);
    long n,len = strlen(s);
    bool weight[10000000];
    scanf("%ld",&n);
    long i,j,arr[n];
    for(i=0;i<n;i++) scanf("%ld",&arr[i]);
    for(i=0;i<len;) {
        long sum = 0;
        for(j=i;s[i]==s[j];j++) {
          sum += s[j]-'a'+1;  
          weight[sum] = true;
        }
        i = j;
    }
    for(i=0;i<n;i++) {
        if(weight[arr[i]]) 
            printf("Yes\n");
        else
            printf("No\n");
    }
}

int main() {
    solve();
    return 0;
}
