#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void solve() {
    char str[10001];
    scanf("%s",str);
    int i,j,n=strlen(str),total=0;
    for(i=0,j=n-1;i<j;i++,j--) {
        total += abs(str[i]-str[j]);
    }
    printf("%d\n",total);
}

int main() {
    int q;
    scanf("%d",&q);
    while(q--)
        solve();
    return 0;
}
