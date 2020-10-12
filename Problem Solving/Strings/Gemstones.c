#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {

    int i,j, n, count = 0, arr[26] = {0};
    scanf("%d",&n); 
    for(i=0;i<n;i++) {
        char s[100];
        scanf("\n");
        scanf("%s",&s);
        int size = strlen(s);
        for(j=0;j<size;j++) {
            if(arr[s[j] - 'a'] == i) {
                arr[s[j]- 'a']++;
                if(arr[s[j] - 'a'] == n) {
                    count++;
                }
            }
        }
    }
    printf("%d\n",count);

    return 0;
}
